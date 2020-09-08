#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zconf.h>
#include <unistd.h>

int i;
int main( int argc, char *argv[] ) {
    for(i = 0; i < 5; ++i) {
        fork();
	sleep(5);
    };
    return 0;
}
