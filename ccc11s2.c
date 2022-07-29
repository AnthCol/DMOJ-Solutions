#include <stdio.h>

int main() {
    int length; 
    int count = 0; 
    char tempChar; 
    scanf("%d", &length); 
    getchar(); 
    int answers[length*2]; 

    
    for (int i = 0; i < (length*2); i++){
        scanf("%c", &tempChar);
        getchar(); 
        answers[i] = tempChar; 
        
        
    }
    for (int i = 0, x = length; x < length*2; i++, x++){
        if (answers[i] == answers[x]){
            count++; 
        }
    }
    
    printf("%d", count); 
    
    
    
    
    
    return 0;
}
