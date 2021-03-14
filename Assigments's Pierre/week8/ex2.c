#include <stdio.h>
#include <memory.h>
#include <stdlib.h>
#include <unistd.h>

// si: Amount of memory swapped in from disk (/s).
// so: Amount of memory swapped to disk (/s).
// before running si = so = 0
// after running si = 0; so = 2
#define TEN_MB 10485760 //10 MB
int main() {
    for (int i = 0; i < 10; ++i) {
        // Allocating 10MB
        void *ptr = calloc(1, TEN_MB);
        if (ptr != NULL) {
            // Fill 0
            memset(ptr, 0, TEN_MB);
        } else {
            // Failed to allocate memory
            fprintf(stderr, "Can not allocate memory");
            exit(EXIT_FAILURE);
        }
        sleep(1);
    }
    exit(EXIT_SUCCESS);
}
