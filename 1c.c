#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	const char*file="fifo.txt";

	if(mknod(file,S_IFIFO | 0666,0) == -1){
		perror("mknod");
		return 1;
	}

	printf("FIFO file creted : %s\n", file);
	return 0;
}
