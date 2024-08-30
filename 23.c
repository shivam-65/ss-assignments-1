/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :23. Write a program to create a Zombie state of the running program.
*/

#include <sys/types.h> // Import for `fork` system call
#include <unistd.h>    // Import for `fork` system call
#include <stdio.h>     // Import for `printf` function

void main()
{
    pid_t child;

    if ((child = fork()) != 0)
    {
        // Only creator process can enter this branch
        printf("Parent PID: %d\n", getpid());
        printf("Putting parent to sleep for 300s!\n");
        sleep(300); // Put the creator process to sleep for 100s
        printf("Parent is now awake!\n");
    }
    else
    {
        // Only child process can enter this branch
        printf("Child PID: %d\n", getpid());
        printf("Exiting child!\n");
        _exit(0); // Terminate the child process
        // The above exit causes the child to exit while the parent is asleep, hence won't be able to send the exit signal to the parent & ends up becoming a zombie
    }
}

/*
/a.out
Parent PID: 10006
Putting parent to sleep for 300s!
Child PID: 10007
Exiting child!


^Z                              

*/
