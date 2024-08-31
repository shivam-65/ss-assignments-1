/*
Name: Padaliya Shivam
Roll No.: MT2024107
Program :4. Write a program to open an existing file with read write mode. Try O_EXCL flag also.
*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
	int f=open("three.txt",O_RDWR);
	printf("%d\n",f);
	int n=open("three.txt",O_EXCL);
	printf("%d\n",n);
 
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
3
4
*/
