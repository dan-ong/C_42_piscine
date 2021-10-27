#makes directories ex00 - ex08
mkdir ex0{0..8}

#makes gitignore and adds basic rules
touch .gitignore
echo .gitignore>> .gitignore
echo main.c>> .gitignore
echo .DS_Store>> .gitignore
echo a.out>> .gitignore
echo c.sh>> .gitignore

#makes shell file c.sh
#used for compiling/norminetting/running
#code in each exercise using "bash c.sh"
#places in each subfolder
touch c.sh
echo "gcc -Werror -Wall -Wextra *.c">> c.sh
echo "norminette f*.c">> c.sh
echo ./a.out>> c.sh
for d in */; do cp c.sh "$d"; done

#makes main.c file with basic inputs
#copies to subfolders
touch main.c
printf 'void\tft_();\n\nint\tmain(void)\n{\n\tft_();\n\treturn (0);\n}\n'>main.c
for d in */; do cp main.c "$d"; done

#removes unnecessary files in root folder
rm c.sh
rm main.c
