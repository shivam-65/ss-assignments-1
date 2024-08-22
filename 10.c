/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :10. Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){
	int file=open(argc[1],O_RDWR | O_CREAT,S_IRWXU);
	
	char data[10]="abcdefghij";
	write(file,data,10);
	
	int s=lseek(file,10,SEEK_CUR);
	printf("%d\n",s);

	write(file,data,10);
	
	s=lseek(file,0,SEEK_CUR);
	printf("%d\n",s);

	return 0;
}	

/*
./a.out file1.txt
20
30

od -c file2.txt
0000000  \n   h   e   l   l   o       m   y       n   a   m   e       i
0000020   s       s   h   i   v   a   m  \n  \0  \0  \0  \0  \0  \0  \0
0000040  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0
*
51714500  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0  \0
51714516


*/	
