#include <stdio.h>

int main() {
    int count = 0; 
    scanf("%d", &count); 
    getchar(); 
   
    int length = 0; 
    int array1 [100000]; 
    int array2 [100000]; 
    int maxArray[count]; 
    
    for (int i = 0; i < count; i++){
        maxArray[i] = 0; 
    }
    for (int i = 0; i < 100000; i++){
        array1[i] = -1; 
        array2[i] = -1; 
    }
    
    for (int j = 0; j < count; j++){
        scanf("%d", &length); 
        getchar(); 
        for (int i = 0; i < length; i++){
            scanf("%d", &array1[i]); 
        }
        getchar(); 
        for (int i = 0; i < length; i++){
            scanf("%d", &array2[i]); 
        }
        getchar(); 
        for (int i = 0; i < length; i++){
            for (int x = i + 1; x < length; x++){
                if (array1[i] == array2[x]){
                    if (x - i > maxArray[j]) maxArray[j] = x - i; 
                }
            }
        }
    }
    for (int i = 0; i < count; i++){
        printf("The maximum distance is %d\n", maxArray[i]); 
    }
    
    return 0;
}
