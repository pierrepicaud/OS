#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void bubbleSort(int arg[], int lenArr) {
    // size_t lenArr = sizeof(arg)/sizeof(arg[0]);
    int notOK = 1;
    while (notOK) {
        notOK = 0;
        for (int i = 0; i < lenArr - 1; ++i) {
            if (arg[i] > arg[i+1] ) {
                notOK = 1;
                int temp =  arg[i+1];
                arg[i+1] = arg[i];
                arg[i] = temp;
            }
        }
    }

}

int main() {
    int index, arr[10];
    printf("Enter 10 integers: \n");
    for(index = 0; index < 10; index ++)
        scanf("%d", &arr[index]);
    printf( "\n" );

    // Print the elements
    printf("The integers are: ");
    for(index = 0; index < 10; index ++)
        printf("%d ", arr[index]);
    printf( "\n" );

    // Print the elements after bubbleSort
    bubbleSort(arr, 10);
    printf("The integers after bubble sort are: ");
    for(index = 0; index < 10; index ++)
        printf("%d ", arr[index]);
    printf( "\n" );

    // 242 1997 385 350 35 1 23 45 98 54
    return 0;
}

