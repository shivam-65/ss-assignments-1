/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
*/

#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>

int main(int argv,char *argc[]){
	int fd=open(argc[1],O_WRONLY|O_CREAT|O_APPEND,S_IRWXU);

	if(fd==-1){
		perror("error");
		return 1;
	}

	int fd_dup1=dup(fd);//assigne next minimun file descriptor
	if(fd_dup1==-1){
		perror("error");
		close(fd);
		return 1;
	}

	int fd_dup2=dup2(fd,10);// if 10 file descriptor is avalible than assign otherwise return -1
	if(fd_dup2==-1){
		perror("error");
		close(fd);
		close(fd_dup1);
		return 1;
	}

	int fd_dup3 = fcntl(fd, F_DUPFD, 5);//assigne fd greater than or equal to 5 
	if(fd_dup3==-1){
		perror("error");
		close(fd);
		close(fd_dup1);
		close(fd_dup2);
		return 1;
	}

	write(fd,"write using fd\n",16);
	write(fd_dup1,"write usind dup1\n",18);
	write(fd_dup2,"write using dup2\n",18);
	write(fd_dup3,"write using dup3\n",18);

	close(fd);
	close(fd_dup1);
	close(fd_dup2);
	close(fd_dup3);

	return 0;

}

/*
cat 11text.txt
write using fd
write usind dup1
write using dup2
write using dup3
*/
