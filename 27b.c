/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :27. Write a program to execute ls -Rl by the following system calls
b. execlp
*/

#include <stdio.h>
#include <unistd.h>
int main()
{
    // it will use environment variable PATH to run executable PATH .
    // it does not required entire file path as we did in execl().
    char *path = "ls";
    execlp(path, path, "-Rl", NULL);
    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ nano 27b.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 27b.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
.:
total 10940
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
*/
