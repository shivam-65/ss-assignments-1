/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :27. Write a program to execute ls -Rl by the following system calls
c. execle
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc,char *argv[],char *env[])
{
    //we have to pass environment variable
    char *path = "/bin/ls";
    execle(path, path, "-Rl" ,"hello2.txt",NULL, env);
    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 27c.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out tex1.txt
-rw-rw-r-- 3 shivam shivam 8 Aug  8 14:58 hello2.txt
*/
