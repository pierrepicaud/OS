#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <unistd.h>
#include <stdbool.h>
# define BUFFER 200
int main( int argc, char *argv[] ) {
    // bool temp = true;
    char command[BUFFER+1];
    printf(">");
    while (fgets(command, BUFFER, stdin)!=NULL) {
        printf(">");
        system(command);
        //temp = false;
    }
    return 0;
}
