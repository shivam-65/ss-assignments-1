/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :a. soft link (symlink system call)
*/

#include<stdio.h>
#include<unistd.h>

int main(){
	const char*target="1a.txt";
	const char*link="1a_link.txt";

	if(symlink(target,link)!=0){
		perror("symlink");
		return 1;
	}

	printf("Symbolic link created: %s -> %s\n",link,target);
	return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
Symbolic link created: 1a_link.txt -> 1a.txt

*/
