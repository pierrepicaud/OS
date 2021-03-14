#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>
#define MAX_LIMIT 100

char* reverse_string(char *str)
{
    char temp;
    size_t len = strlen(str) - 1;
    size_t i;
    size_t k = len;

    for(i = 0; i < len; i++)
    {
        temp = str[k];
        str[k] = str[i];
        str[i] = temp;
        k--;

        /* As 2 characters are changing place for each cycle of the loop
           only traverse half the array of characters */
        if(k == (len / 2))
        {
            break;
        }
    }
}


int main() {
    char str[MAX_LIMIT];

    /*Ex2*/
    printf("Enter a string: \n");
    fgets(str, MAX_LIMIT, stdin);
    reverse_string(str);
    printf("%s\n\n", str);

    return 0;
}

