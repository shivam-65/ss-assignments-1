#include<stdio.h>
#include<unistd.h>

int main(){
	const char*target="text1.txt";
	const char*link="hello_link.txt";

	if(symlink(target,link)!=0){
		perror("symlink");
		return 1;
	}

	printf("Symbolic link created: %s -> %s\n",link,target);
	return 0;
}
