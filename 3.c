/*
Name: Padaliya Shivam
Roll No.: MT2024107
Program : 3. Write a program to create a file and print the file descriptor value. Use creat ( ) system call
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
	int file=creat("three.txt",S_IRUSR |S_IWUSR);
	if(file==-1){
		perror("creat");
		return 1;
	} 
	
	printf("file descriptor: %d\n",file);
	close(file);
	return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
file descriptor: 3
*/
