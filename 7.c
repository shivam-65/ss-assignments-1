/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :7. Write a program to copy file1 into file2 ($cp file1 file2).
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){

	int file1=open(argc[1],O_RDONLY);
	if(file1==-1){
		printf("Error in file1");
		close(file1);
	}
	
	int file2=open(argc[2],O_WRONLY | O_CREAT,S_IRWXU);
	if(file2==-1){
		printf("Error in file2");
		close(file2);
	}
	char c;
	while(read(file1,&c,1)){
		write(file2,&c,1);
	}
	printf("File Copied");
	close(file1);
	close(file2);
	return 0;
}
