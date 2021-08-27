#!/usr/bin/env bash
# READABLE_NAME:Build Items config.cpp
# Compiles changes to Items into cpp

echo "Running pls wait!"

###### Basic vars ######
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
    quantity=$(echo "$item" | cut -f4 -d"," | xargs)
    weight=$(echo "$item" | cut -f5 -d"," | xargs)
    size=$(echo "$item" | cut -f3 -d"," | xargs)
    split=$(echo "$item" | cut -f6 -d"," | xargs)

    echo "    class $class: $baseClass {" >> $output

    if [[ ! $size =~ "X" ]]; then
      sizeX=$(echo "$size" | cut -f1 -d":" | xargs)
      sizeY=$(echo "$size" | cut -f2 -d":" | xargs)
      sizeTotal=$((sizeX * sizeY))
      echo "        itemSize[]={$sizeX,$sizeY}; // $sizeTotal" >> $output
    fi
    if [[ ! $weight =~ "X" ]]; then
      echo "        weight=$weight;" >> $output
    fi
    if [[ !  $quantity =~ "X" ]]; then
      quantity1=$(echo "$quantity" | cut -f1 -d":" | xargs)
      quantity2=$(echo "$quantity" | cut -f2 -d":" | xargs)
      echo "        varQuantityInit=$quantity1;
        varQuantityMin=0;
        varQuantityMax=$quantity2;" >> $output
    fi
    if [[ ! $split =~ "X" ]]; then
      split=$(echo "$split" | sed 's/.$//')
      echo "        canBeSplit=$split;" >> $output
    fi
    echo "    };" >> $output
  fi
done

echo '};' >> $output #Close the file

echo "Done!"