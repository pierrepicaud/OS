#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <unistd.h>
#include <stdbool.h>

int main( int argc, char *argv[] ) {
    bool temp = true;
    char* a[20];
    while (temp) {
        printf("user@host:~/");
        scanf("%s", a);
        system(a);

        //temp = false;
    }
    return 0;
}
