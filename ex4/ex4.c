// Write a program that calls `fork()` and then calls some form of `exec()`
// to run the program `/bin/ls`. Try a few variants of `exec()`, such as 
// `execl()`, `execle()`, `execv()`, and others. Why do you think there 
// are so many variants of the same basic call?

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
    printf("this is the parent process!\n");
    int clone = fork();
    if (clone < 0) {
        printf("fork failed\n");
        exit(1);
    } else if (clone == 0) {
        printf("this is a child process\n");
        char *args[] = {"ls", "-l", NULL};
        execvp("ls", args);
    } else {
        int wc = waitpid(clone, NULL, 0);
    }
    return 0;
}
