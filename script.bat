set targetFolder = target

gcc main.c -o main

if not exist target md target

ren main.exe main.cgi

move main.cgi target

