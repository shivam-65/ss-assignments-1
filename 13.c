/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/select.h>

int main() {
    fd_set fd; 
    struct timeval timeout; 
    
    FD_ZERO(&fd);      
    FD_SET(STDIN_FILENO, &fd); 

    timeout.tv_sec = 10;
    timeout.tv_usec = 0;

    int result = select(STDIN_FILENO + 1, &fd, NULL, NULL, &timeout);

    if (result == -1) {
        perror("error");
        return 1;
    } else if (result == 0) {
        printf("No data was entered within 10 seconds. Timeout occurred.\n");
    } else {
        if (FD_ISSET(STDIN_FILENO, &fd)) {
            char buffer[1024];
            ssize_t bytesRead = read(STDIN_FILENO, buffer, sizeof(buffer) - 1);
            if (bytesRead > 0) {
                buffer[bytesRead] = '\0';  
                printf("Data received: %s\n", buffer);
            }
        }
    }

    return 0;
}

/*
./a.out
hi my name is shivam
Data received: hi my name is shivam
*/
