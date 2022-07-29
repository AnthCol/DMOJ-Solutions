#include <stdio.h>

int main() {
    long long unsigned size, inputs; 
    scanf("%llu", &size);
    getchar(); 
    int array[size]; 
    int prefixSum[size]; 
    long long unsigned sum = 0; 
    
    scanf("%d", &array[0]); 
    getchar(); 
    sum += array[0]; 
    prefixSum[0] = array[0]; 
    
    for (int i = 1; i < size; i++){
        scanf("%d", &array[i]); 
        getchar(); 
        sum += array[i]; 
        prefixSum[i] = prefixSum[i-1] + array[i]; 
    }
    scanf("%llu", &inputs); 
    getchar(); 
    int left, right; 
    for (int i = 0; i < inputs; i++){
        scanf("%d %d", &left, &right); 
        getchar(); 
        left --; 
        right; 
        
        if (left < 0){
            printf("%d\n", prefixSum[right]); 
        }
        else printf("%d\n", prefixSum[right] - prefixSum[left]); 
        
    }
    
    return 0;
}
