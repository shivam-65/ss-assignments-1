/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :14 Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.
*/

#include<stdio.h>
#include <sys/stat.h>   
#include <stdlib.h>     
#include <unistd.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    struct stat fileStat;

    // Get file statistics using lstat() to handle symbolic links properly
    if (lstat(argv[1], &fileStat) == -1) {
        perror("Error determining file type");
        exit(EXIT_FAILURE);
    }

    if (S_ISREG(fileStat.st_mode)) {
        printf("This is a regular file.\n");
    } else if (S_ISDIR(fileStat.st_mode)) {
        printf("This is a directory.\n");
    } else if (S_ISLNK(fileStat.st_mode)) {
        printf("This is a symbolic link.\n");
    } else if (S_ISCHR(fileStat.st_mode)) {
        printf("This is a character device.\n");
    } else if (S_ISBLK(fileStat.st_mode)) {
        printf("This is a block device.\n");
    } else if (S_ISFIFO(fileStat.st_mode)) {
        printf("This is a FIFO (named pipe).\n");
    } else if (S_ISSOCK(fileStat.st_mode)) {
        printf("This is a socket.\n");
    } else {
        printf("Unknown file type.\n");
    }

    return 0;
}

/*
./a.out 11text.txt
This is a regular file.
*/
