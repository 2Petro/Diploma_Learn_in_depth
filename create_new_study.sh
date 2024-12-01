#!/bin/bash

#UNIT requires

mkdir -p "_UNIT_$1/Lesson_$2"
touch "_UNIT_$1/Lesson_$2/README.md"
echo -e "Status / \n\n- **Unit $1:** ❓ In progress" > "_UNIT_$1/Lesson_$2/README.md"

#Lesson requires

touch "_UNIT_$1/Lesson_$2/notes"
touch "_UNIT_$1/Lesson_$2/main.c"

#Update progress

echo "| $1/$2 | $3 | ❓ In progress | " >> README.md

