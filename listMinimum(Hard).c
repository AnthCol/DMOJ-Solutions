#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
    if( *(long long int*)a - *(long long int*)b < 0 )
        return -1;
    if( *(long long int*)a - *(long long int*)b > 0 )
        return 1;
    return 0;
}
int main() {
    int total; 
    scanf("%d", &total); 
    long long int array[total]; 
    for (int i = 0; i < total; i++){
        scanf("%llu", &array[i]); 
        getchar(); 
    }
    qsort(array, total, sizeof(long long int), cmpfunc); 
    for (int i = 0; i < total; i++){
        printf("%llu\n", array[i]); 
    }
    return 0;
}
