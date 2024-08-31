/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.
*/

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int fd = open("/home/shivam/Desktop/Handsonlist1/18atext.txt.txt", O_RDONLY);
    struct flock rdlock = {F_RDLCK, SEEK_SET, 0, 34, getpid()};
    int i;
    printf("Enter record id:");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        rdlock.l_start = 0;
        break;
    case 2:
        rdlock.l_start = 17;
        break;
    case 3:
        rdlock.l_start = 34;
        break;
    default:
        perror("invalid choise of record!!!");
        return 0;
    }
    fcntl(fd, F_SETLKW, &rdlock);
    printf("record %d id locked Enter to unlock it\n", id);
    getchar();
    getchar();
    rdlock.l_type = F_ULOCK;
    fcntl(fd, F_SETLKW, &rdlock);
    printf("record is unlocked\n");
    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 18b.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
Enter record id:2
record 2 id locked Enter to unlock it

record is unlocked
*/
