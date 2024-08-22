/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :b. hard link (link system call)
*/

#include<stdio.h>
#include<unistd.h>

int main(){
	const char*target="hello2.txt";
	const char*linkfile="hello2Link.txt";

	if(link(target,linkfile)!=0){
		perror("link");
		return 1;
	}

	printf("Hard link created: %s -> %s\n",linkfile,target);
	return 0;
}

/*
./a.out
link: File exists

*/
