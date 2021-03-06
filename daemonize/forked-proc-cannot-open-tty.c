/*
 * =====================================================================================
 *
 *       Filename:  forked-proc-has-no-tty.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年11月08日 16时35分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  James Zhu (N/A), zhujian0805@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>

int main(){

    pid_t pid;

    pid = fork();

    if(pid<0){
        printf("Could not fork\n");
        exit(1);
    }

    if(pid>0){
        printf("Parent exiting\n");
        exit(0);
    }

    printf("I'm the child, i'm alive\n");

    if(setsid() == -1){
        exit(1);
    }

    if(open("/dev/tty", O_RDWR) == -1){
        fprintf(stderr, "Value of errno: %d\n", errno);
        fprintf(stderr, "Error opening the file: %s\n", strerror( errno ));
        perror("Error printed by perror");
    }

}
