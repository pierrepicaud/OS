#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <string.h>




int main() {
    int _int = INT_MAX;
    float  _float = FLT_MAX;
    double  _double = DBL_MAX;
    
    printf("Value of _int: %d \nSize of _int: %lu\n",_int,sizeof(_int));
    printf("Value of _float: %fl \nSize of _float: %ld\n", _float, sizeof(_float));
    printf("Value of _double: %fl\nSize of _double: %ld\n",_double, sizeof(_double));
    return 0;
}

