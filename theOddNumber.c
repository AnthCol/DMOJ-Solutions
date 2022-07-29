#include <stdio.h>

int main() {
    int temp, temp2, inputs; 
    scanf("%d", &inputs); 
    scanf("%d", &temp); 
    
    for (int i = 1; i < inputs; i++){
        scanf("%d", &temp2); 
        temp = temp^temp2; 
    }
    printf("%d\n", temp); 
    return 0;
}
