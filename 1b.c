/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :b. hard link (link system call)
*/

#include<stdio.h>
#include<unistd.h>

int main(){
	const char*target="1b.c";
	const char*linkfile="1b_Link.txt";

	if(link(target,linkfile)!=0){
		perror("link");
		return 1;
	}

	printf("Hard link created: %s -> %s\n",linkfile,target);
	return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
Hard link created: 1b_Link.txt -> 1b.c

*/
