/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :16. Write a program to perform mandatory locking.
a. Implement write lock
*/

#include <unistd.h>    // Imports for `fcntl`
#include <stdio.h>
#include <fcntl.h>     // Imports for `fcntl`, `open`
#include <sys/types.h> // Import for `open`
#include <sys/stat.h>  // Import for `open`

void main(int argc, char *argv[])
{

    char *file;
    struct flock lock, lockStatus;
    int fd;

    if (argc != 2)
        printf("Pass the file name!");
    else
    {
        file = argv[1];

        // Defining lock paramaters
        lock.l_type = F_WRLCK;    // Write lock
        lock.l_whence = SEEK_SET; // Seek to start of the file
        lock.l_start = 0;         // Lock from start of the file
        lock.l_len = 0;           // Locks the entire file
        lock.l_pid = getpid();

        // Copying lock contents, used for checking if a lock has already been placed on the file
        lockStatus = lock;

        // Opening the file
        fd = open(file, O_RDWR);

        // Checking file lock status
        fcntl(fd, F_GETLK, &lockStatus);

        if (lockStatus.l_type == F_WRLCK) // File already has a write lock
            printf("File already locked for writing\n");
        else if (lockStatus.l_type == F_RDLCK) // File already has a read lock
            printf("File already locked for reading\n");
        else
        {
            // Applying lock
            fcntl(fd, F_SETLK, &lock);
            printf("File is now locked for writing\n");
        }

        // pause();  // Used for testing purposes, prevents the program from terminating
    }
}


/*
./a.out text1.txt
File is now locked for writing
*/
