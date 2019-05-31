// Write a program that calls `fork()`. Before calling `fork()`, have the main process access a variable
// (e.g., x) and set its value to something (e.g., 100). What value is the variable in the child process?
// What happens to the variable when both the child and parent change the value of x?

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int x;
int main(void)
{
    // Your code here
    x = 0;
    int counter = fork();
    if (counter == 0)
    {
        printf("%d x from the child process", x);
    }
    else
    {
        x = 100;
        printf("%d x from the parent process", x);
    }

    return 0;
}
