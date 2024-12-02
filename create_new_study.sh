#!/bin/bash

#UNIT requires

mkdir -p "_UNIT_$1/Lesson_$2"
echo -e "Status / \n\n- **Unit $1:** $3 ❓ In progress" > "_UNIT_$1/Lesson_$2/README.md"

#Lesson requires

touch "_UNIT_$1/Lesson_$2/notes"
touch "_UNIT_$1/Lesson_$2/main.c"
touch "_UNIT_$1/Lesson_$2/README.md"
touch "_UNIT_$1/Lesson_$2/$3"

#Update progress

if [ "$4" -eq 1 ]; then
  status_text="✅ Completed"
elif [ "$4" -eq 0 ]; then
  status_text="❓ In Progress"
else
echo "Error: Invalid status. Please provide 0 (Completed) or 1 (In Progress)."
  exit 1
fi

echo "| $1/$2 | $3 | $status_text | " >> README.md

