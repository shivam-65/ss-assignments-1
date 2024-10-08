/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :c. FIFO (mkfifo Library Function or mknod system call)
*/

#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	const char*file="myfifo.txt";

	if(mknod(file,S_IFIFO | 0666,0) == -1){
		perror("mknod");
		return 1;
	}

	printf("FIFO file creted : %s\n", file);
	return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
FIFO file creted : myfifo.txt

*/
