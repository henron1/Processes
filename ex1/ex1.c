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
    printf("parent\n");
    x = 100;
    printf("x is equal to %i\n", x);
    fork();
    printf("x is equal to %i in the forked process\n", x);

}
