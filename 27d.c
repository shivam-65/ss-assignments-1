/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :27. Write a program to execute ls -Rl by the following system calls
d. execv
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    char *filepath = "/bin/ls";
    char *argv[] = {filepath,"-Rl",NULL};
    execv(filepath, argv);
    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ nano 27d.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 27d.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
.:
total 10948
-rw-rw-r-- 1 shivam shivam     1030 Aug 22 10:38 10.c
-rw-rw-r-- 1 shivam shivam     1292 Aug 24 11:33 11.c
-rwx------ 1 shivam shivam       70 Aug 24 11:30 11text.txt
-rw-rw-r-- 1 shivam shivam        0 Aug 24 11:16 11txt.txt
-rw-rw-r-- 1 shivam shivam      828 Aug 24 11:45 12.c
-rw-rw-r-- 1 shivam shivam     1146 Aug 24 18:52 13.c
-rw-rw-r-- 1 shivam shivam     1422 Aug 24 19:09 14.c
-rw-rw-r-- 1 shivam shivam      983 Aug 24 19:47 15.c
-rw-rw-r-- 1 shivam shivam     1691 Aug 29 11:03 16a.c
-rw-rw-r-- 1 shivam shivam      773 Aug 29 11:08 16b.c
-rw-rw-r-- 1 shivam shivam      748 Aug 29 11:16 17a.c
-rw-rw-r-- 1 shivam shivam      992 Aug 29 11:33 17b.c
-rw-rw-r-- 1 shivam shivam        4 Aug 29 11:14 17text.txt
-rw-rw-r-- 1 shivam shivam      558 Aug 29 11:43 19.c
-rw-rw-r-- 1 shivam shivam      388 Aug 22 12:26 1a.c
-rw-rw-r-- 1 shivam shivam      385 Aug 22 12:30 1b.c
-rw-rw-r-- 1 shivam shivam      403 Aug 22 12:33 1c.c
-rw------- 1 shivam shivam        0 Aug 22 12:15 1.txt
-rw-rw-r-- 1 shivam shivam      784 Aug 29 12:41 20.c
*/
