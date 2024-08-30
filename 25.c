/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
*/

#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    int i = 0, childid[3];
    while (i < 3)
    {
        childid[i] = fork();
        if (childid[i] == 0)
        {
            //code executed by child
            pause();//wait for signal
        }
        else
        {
            printf("for parent %d chile %d's pid is %d \n", getpid(), i + 1, childid[i]);
            i++;
        }
    }

    int id, status;
    printf("select the child for which you want parent to wait from 1to 3: ");
    scanf("%d", &id);
    waitpid(childid[id - 1], &status, 0);
    printf("child %d is exited\n",childid[id-1]);
    return 0;
}

/*
./a.out
for parent 20283 chile 1's pid is 20284 
for parent 20283 chile 2's pid is 20285 
for parent 20283 chile 3's pid is 20286 
select the child for which you want parent to wait from 1to 3: 1

*/
