#include <stdio.h>

int main() {
    int size, inputs; 
    scanf("%d %d", &size, &inputs); 
    getchar(); 
    int array[size]; 
    int prefixSum[size]; 
    long long unsigned sum = 0; 
    
    for (int i = 0; i < size; i++){
        scanf("%d", &array[i]); 
        sum += array[i]; 
    }
    getchar(); 
    prefixSum[0] = array[0];
    for (int i = 1; i < size; i++){
        prefixSum[i] = prefixSum[i - 1] + array[i];
    }
    int left, right; 
    for (int i = 0; i < inputs; i++){
        scanf("%d %d", &left, &right); 
        getchar(); 
        left -=2; 
        right--; 
        
        if (left < 0){
            printf("%llu\n", sum - prefixSum[right]); 
        }
        else printf("%llu\n", sum - (prefixSum[right] - prefixSum[left])); 
        
    }
    
    return 0;
}
