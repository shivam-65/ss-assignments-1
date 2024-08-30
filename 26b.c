/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :26. Write a program to execute an executable program.
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
*/

#include <stdio.h>
#include <unistd.h>
int main(int argc, char *argv[])
{
    char *filepath=argv[1];
    argv++;
    execv(filepath, argv);
    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 26b.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out hello2.txt
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ 
*/
