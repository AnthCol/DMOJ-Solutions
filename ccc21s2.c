#include <stdio.h>


int main(void){
    
    int rows, columns, inputs; 
    scanf("%d", &rows); 
    getchar(); 
    scanf("%d", &columns); 
    getchar(); 
    scanf("%d", &inputs); 
    getchar(); 
    int rowA[rows]; 
    int colA[columns];
    // 0 equals black 
    // 1 equals gold
    for (int i = 0; i < rows; i++){
        rowA[i] = 0; 
    }
    for (int i = 0; i < columns; i++){
        colA[i] = 0; 
    }
    
    
    char tempChar; 
    int tempInt; 
    for (int i = 0; i < inputs; i++){
        scanf("%c %d", &tempChar, &tempInt);
        getchar(); 
        if (tempChar == 'R'){
            rowA[tempInt - 1]++; 
        }
        else{
            colA[tempInt - 1]++; 
        }
    }
    int count = 0; 
    for (int i = 0; i < rows; i++){
        for (int x = 0; x < columns; x++){
            if ((rowA[i] + colA[x])%2 == 1) count++; 
        }
    }
    
    printf("%d\n", count); 
    
    return 0; 
}
