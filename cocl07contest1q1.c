#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main() {
    int left[3]; 
    int right[3]; 
    int ansL, ansR; 
    for (int i = 0; i < 3; i++){
        scanf("%d %d", &left[i], &right[i]); 
        getchar();
    }
    qsort(left, 3, sizeof(int), cmpfunc); 
    qsort(right, 3, sizeof(int), cmpfunc); 
    
    
    if (left[0] == left[1]) ansL = left[2]; 
    else ansL = left[0]; 
    if (right[0] == right[1]) ansR = right[2]; 
    else ansR = right[0]; 
    
    printf("%d %d\n", ansL, ansR); 
    
    
    
    
    return 0;
}
