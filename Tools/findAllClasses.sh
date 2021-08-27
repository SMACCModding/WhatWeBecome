#!/bin/bash

#Finds all CPP files within specified sub folders
DZDir='/mnt/e/Dayz_Project/DZ/'
searchedSubDirs=( 'characters' 'gear' 'vehicles' 'weapons' )
hiddenClasses=( 'Single' 'OpticsInfo' 'Mode_Safe' 'Proxy' 'FullAuto' 'Burst' 'SemiAuto' 'DefaultAmmo' )

for searchDir in ${searchedSubDirs[*]}; do
  mapfile -t matchedArray < <( find "${DZDir}${searchDir}" -type f -name "*.cpp" )
done

for searchFile in ${matchedArray[*]}; do
  mapfile -t hitsArray < <(grep "class" "$searchFile")
  for hit in "${hitsArray[@]}"; do
    for checkClass in ${hiddenClasses[*]}; do
      if [[ $checkClass =~ $hit ]]; then
        echo "$hit"
      fi
    done
  done
done