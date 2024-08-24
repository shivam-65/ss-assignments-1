/*
Name: Padaliya Shivam
Roll No.: MT2024107
Program : 6. Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls
*/
#include<stdio.h>
#include<unistd.h>

int main(){

	char buffer[100];
	int n=read(0,buffer,100);
	write(1,buffer,n);
}

/*
./a.out
my name is shivam padaliya
my name is shivam padaliya
*/
