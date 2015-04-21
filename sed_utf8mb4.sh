#!/bin/bash

# replace these strings with their utf8mb4 versions
declare -a aUTF8SED=('utf8_general_ci' 'charset=utf8' 'SET NAMES utf8' )

for UTF8 in "${aUTF8SED[@]}"
do
    echo -e "\n$UTF8";
    REPLACE=$(echo $UTF8 | sed -e "s/utf8/utf8mb4/g")
    echo $REPLACE;

    for file in $(grep -rl "$UTF8" .)
    do	
	if [ "$file" != "$0" ]
	then
	    echo $file;
	    sed -i "s/$UTF8/$REPLACE/g" $file;
	fi
    done
done
