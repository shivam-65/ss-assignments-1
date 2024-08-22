/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :9. Write a program to print the following information about a given file.
*/

#include<stdio.h>
#include<sys/stat.h>
#include<time.h>

int main(int argc, char *argv[]){
	struct stat file;
	
	if(stat(argv[1],&file) == -1){
		perror("Error\n");
		return 1;
	}
	printf("file: %s\n",argv[1]);
	printf("Inode: %lu\n",file.st_ino);
	printf("No. of hard links: %lu\n",file.st_nlink);
	printf("uid: %u\n",file.st_uid);
	printf("gid: %u\n",file.st_gid);
	printf("size: %ld bytes\n",file.st_size);
	printf("block size: %ld bytes\n",file.st_blksize);
	printf("no. of blocks: %ld\n", file.st_blocks);
        printf("time of last access: %s", ctime(&file.st_atime));
        printf("time of last modification: %s", ctime(&file.st_mtime));
        printf("time of last change: %s", ctime(&file.st_ctime));

    return 0;
}

/*
file: file1.txt
Inode: 3184551
No. of hard links: 1
uid: 1000
gid: 1000
size: 25 bytes
block size: 4096 bytes
no. of blocks: 8
time of last access: Thu Aug 22 09:04:21 2024
time of last modification: Thu Aug 22 09:02:38 2024
time of last change: Thu Aug 22 09:02:38 2024
*/
