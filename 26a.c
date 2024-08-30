/*
26. Write a program to execute an executable program.
a. use some executable program
*/

#include <unistd.h> // Import for `execl` library function

void main()
{
    char *path = "./.out-files/a.out";
    char *arg = "14.c";

    execl(path,path, arg, NULL);
}

/*
./a.out
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ 

*/
