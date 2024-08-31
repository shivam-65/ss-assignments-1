// Pipariya Darshitkumar
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
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
typedef struct record
{
    int id;
    int ticket;
} record;

int main(int argc, char *argv[])
{
    // int fd=open(argv[1],O_WRONLY|O_CREAT,|S_IRWXU);
    record r1 = {1, 1};
    record r2 = {2, 2};
    record r3 = {3, 3};
    int fd = open(argv[1], O_WRONLY | O_CREAT, S_IRWXU);
    char buf[18];

    sprintf(buf, "id=%d ticket_no=%d\n", r1.id, r1.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));

    sprintf(buf, "id=%d ticket_no=%d\n", r2.id, r2.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf, 0, sizeof(buf));

    sprintf(buf, "id=%d ticket_no=%d\n", r3.id, r3.ticket);
    write(fd, &buf, sizeof(buf));
    memset(&buf,0,sizeof(buf));

    return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out 18atext.txt
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ cat 18atext.txt
id=1 ticket_no=1
id=2 ticket_no=2
id=3 ticket_no=3
*/
