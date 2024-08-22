/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :8. Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
*/

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(int argc, char *argv[]) {
    

    int file = open(argv[1], O_RDONLY);
    char buffer[256];
    char c;
    int i = 0;

    while ((read(file, &c, 1)) > 0) {
        buffer[i++] = c;
        if (c == '\n' || i == 255) {
            buffer[i] = '\0';
            printf("%s", buffer);
            i = 0;
        }
    }

    close(file);
    return 0;
}

/*
./a.out file1.txt
India, officially the Republic of India, is a country in South Asia. It is the seventh-largest country by area; the most populous country with effect from June 2023; and from the time of its independence in 1947, the world's most populous democracy.
*/
