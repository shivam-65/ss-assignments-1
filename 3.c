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
