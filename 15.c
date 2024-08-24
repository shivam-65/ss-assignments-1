/*
Name : Padaliya Shivam
Roll No. : MT2024107
Program :15. Write a program to display the environmental variable of the user (use environ).
*/

#include <stdio.h>

extern char **environ; 
int main() {
    char **e = environ;

    while (*e) {
        printf("%s\n", *e);
        e++;
    }

    return 0;
}


/*
./a.out
SHELL=/bin/bash
SESSION_MANAGER=local/shivam-Vostro-3590:@/tmp/.ICE-unix/1730,unix/shivam-Vostro-3590:/tmp/.ICE-unix/1730
QT_ACCESSIBILITY=1
COLORTERM=truecolor
XDG_CONFIG_DIRS=/etc/xdg/xdg-ubuntu:/etc/xdg
SSH_AGENT_LAUNCHER=openssh
XDG_MENU_PREFIX=gnome-
GNOME_DESKTOP_SESSION_ID=this-is-deprecated
GNOME_SHELL_SESSION_MODE=ubuntu
SSH_AUTH_SOCK=/run/user/1000/keyring/ssh
XMODIFIERS=@im=ibus
DESKTOP_SESSION=ubuntu
GTK_MODULES=gail:atk-bridge
PWD=/home/shivam/Desktop/Handsonlist1
LOGNAME=shivam
XDG_SESSION_DESKTOP=ubuntu
XDG_SESSION_TYPE=wayland
SYSTEMD_EXEC_PID=1757
XAUTHORITY=/run/user/1000/.mutter-Xwaylandauth.XMG7S2
HOME=/home/shivam
USERNAME=shivam
*/
