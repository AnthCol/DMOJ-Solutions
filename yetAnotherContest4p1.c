#include <stdio.h>

int main() {
    int n, TWOn; 
    scanf("%d", &n); 
    TWOn = n*2; 
    
    int array[TWOn*2];  // going to be rotating this (4n array)
    int count = 0, max = 0; 
    int x = TWOn; 
 
    for (int i = 0; i < TWOn; i++){
        scanf("%d", &array[i]);
        array[x] = array[i]; 
        x++; 
    }
    int check = 0; 
    for (int i = 0, x = i + n; i <= TWOn; i++, x++){ // I represents X here 
        if (array[i] == array[x]){
            count++; 
        }
        check++; 
        if (check == n){
            if (count > max) max = count; 
            check = 0; 
            count = 0; 
        }
        
    }
    
    

    printf("%d\n", max); 
    
    
    return 0;
}
