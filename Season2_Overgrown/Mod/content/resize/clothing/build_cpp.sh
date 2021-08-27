#!/usr/bin/env bash
# READABLE_NAME:Build Clothing config.cpp
# Compiles changes to Clothing into cpp

echo "Running pls wait!"

###### Basic vars ######
categoriesFile=categories.txt
inputFile=input.txt

output=config.cpp # Output to this file

###### Preps files ######
# Clears file end
lineNum=$(grep -n "    // ==== Auto Generated ====" $output | cut -f1 -d":")
echo "$(head -n"$lineNum" "$output")" > $output

echo "    // Last build: $(date).
" >> $output

###### Populates files ######
CLASSES=( $(grep -v "#" $inputFile) )

for item in ${CLASSES[*]}; do
  if [[ $item =~ ">" ]]; then
    if [[ $item =~ ">>" ]]; then
      header=$(echo $item | cut -f3 -d">" | cut -f1 -d",")
      echo "    // ======= $header =======" >> $output
    else
      header=$(echo $item | cut -f2 -d">" | cut -f1 -d",")
      echo "    // ${header}" >> $output
    fi
  else
    class=$(echo "$item" | cut -f1 -d"," | xargs)
    baseClass=$(echo "$item" | cut -f2 -d"," | xargs)
    category=$(echo "$item" | cut -f3 -d"," | xargs)
    attachments=( $(echo "$item" | cut -f4 -d"," | xargs | tr : ' ') )

    categoryItem=$(grep "^$category" $categoriesFile | xargs)
    size=$(echo "$categoryItem" | cut -f2 -d"," | xargs)
    sizeX=$(echo "$size" | cut -f1 -d":" | xargs)
    sizeY=$(echo "$size" | cut -f2 -d":" | xargs)
    sizeTotal=$((sizeX * sizeY))
    cargo=$(echo "$categoryItem" | cut -f3 -d"," | xargs)
    if [[ ! $cargo == "X" ]]; then
      cargoX=$(echo "$cargo" | cut -f1 -d":" | xargs)
      cargoY=$(echo "$cargo" | cut -f2 -d":" | xargs)
      cargoTotal=$((cargoX * cargoY))
    fi
    hitPoints=$(echo "$categoryItem" | cut -f4 -d"," | xargs)

    echo "    class $class: $baseClass {
        itemSize[]={$sizeX,$sizeY}; // $sizeTotal" >> $output
    if [[ ! $cargo == "X" ]]; then
      echo "        itemsCargoSize[]={$cargoX,$cargoY}; // $cargoTotal" >> $output
    fi
    if [[ ! ${attachments[*]} =~ "X" ]]; then
      i=0
      count=${#attachments[@]}
      count=$((count - 1))
      echo "        attachments[]={" >> $output
      for attachment in ${attachments[*]}; do
        if [[ $i = "$count" ]]; then
          attachment=$(echo "$attachment" | sed 's/.$//')
          attachment="$attachment\""
        else
          attachment="${attachment}\","
        fi
        echo "            \"$attachment" >> $output
        i=$((i+1))
      done
      echo "        };" >> $output
    fi
    if [[ ! $hitPoints == "X" ]]; then
      hitPoints="$(echo "${hitPoints}" | sed 's/.$//')"
      echo "        class DamageSystem {
            class GlobalHealth {
                class Health {
                    hitpoints=$hitPoints;
                };
            };
        };" >> $output
    fi
    echo "        quickBarBonus=10;" >> $output
    echo "    };" >> $output
  fi
done

echo '};' >> $output #Close the file

echo "Done!"