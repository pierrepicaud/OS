#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>

pid_t pid;
int n = 888;
int main() {
    pid = fork();
    if (pid > 0) {
        printf("Hello from parent [%d - %d]\n",pid, n);
    } else {printf("Hello from child [%d - %d]\n",pid, n);}
    return 0;
}

