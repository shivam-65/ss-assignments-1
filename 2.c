/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :2. Write a simple program to execute in an infinite loop at the background. Go to /proc directory and
identify all the process related information in the corresponding proc directory.
*/

#include<stdio.h>
#include<unistd.h>

int main(){
	while(1){
		printf("Running in loop\n");
		sleep(2);
	}
	return 0;
}

/*
shivam@shivam-Vostro-3590:~/Desktop/Handsonlist1$ ./a.out
Running in loop
Running in loop
Running in loop
Running in loop
Running in loop
Running in loop
Running in loop


*/
