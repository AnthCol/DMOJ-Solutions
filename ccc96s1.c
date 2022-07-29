#include <stdio.h>

int main() {
    int total; 
    scanf("%d", &total); 
    getchar(); 
    int array[total]; 
    for (int i = 0; i < total; i++){
        scanf("%d", &array[i]); 
        getchar(); 
    }
    int count = 0; 
    for (int i = 0; i < total; i++){
        for (int x = 1; x < array[i]; x++){
            if (array[i]%x == 0) count+=x; 
        }
        
        if (count < array[i]) printf("%d is a deficient number.\n", array[i]);
        else if (count == array[i]) printf("%d is a perfect number.\n", array[i]); 
        else printf("%d is an abundant number.\n", array[i]); 
        count = 0; 
    }
    return 0;
}
