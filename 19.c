/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :19. Write a program to find out time taken to execute getpid system call. Use time stamp counter.
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

unsigned long long rdtsc()
{
    unsigned long long dst;
    __asm__ __volatile__("rdtsc": "=A"(dst));
    return dst;
}

void main()
{
    long long int s, e;
    s = rdtsc();
    printf("Process id: %d\n", getpid());
    e = rdtsc();
    printf("Difference is : %llu\n", e - s);
}

/*
./a.out
Process id: 6514
Difference is : 254100
*/
