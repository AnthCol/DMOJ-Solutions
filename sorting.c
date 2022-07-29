#include <stdio.h>

int main() {
    int num = 0;
    int tempNum = 0; 
    scanf("%d", &num); 
    int array[num]; 
    getchar(); 
    for (int i = 0; i < num; i++){
        scanf("%d", &tempNum); 
        getchar(); 
        array[i] = tempNum; 
    }
    for (int i = 0; i < num; i++){
        for (int x = i + 1; x < num; x++){
            if (array[x] < array[i]){
                tempNum = array[x]; 
                array[x] = array[i]; 
                array[i] = tempNum; 
            }
        }
    }
    for (int i = 0; i < num; i++){
        printf("%d\n", array[i]); 
    }
    return 0;
}
