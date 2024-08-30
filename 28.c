/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :28. Write a program to get maximum and minimum real time priority.
*/

#include <sched.h> // Import for `sched_get_priority_*` functions
#include <stdio.h> // Import for `printf`

void main()
{
    int maxi, mini;

    maxi = sched_get_priority_max(SCHED_RR);
    if (maxi == -1)
        perror("Error\n");
    else
        printf("The max priority with RR Scheduling Policy is : %d\n", maxi);

    mini = sched_get_priority_min(SCHED_RR);
    if (mini == -1)
        perror("Error\n");
    else
        printf("The min priority with RR Scheduling Policy is : %d\n", mini);
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ gcc 28.c
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
The max priority with RR Scheduling Policy is : 99
The min priority with RR Scheduling Policy is : 1
*/
