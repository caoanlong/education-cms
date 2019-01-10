gcc -o main cgiMain.c cgic.c

if [! -d "data" ];then mkdir target

mv main.exe main.cgi

mv main.cgi target