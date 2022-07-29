#include <stdio.h>

int main() {
    int events; 
    scanf("%d", &events); 
    getchar(); 
    double prob = 1; 
    char inputs[events]; 
    for (int i = 0; i < events; i++){
        scanf("%c", &inputs[i]); 
        getchar(); 
        switch(inputs[i]){
            case 'A':
                prob *= 1; 
                break; 
            case 'B':
                prob *= 0.8; 
                break; 
            case 'C':
                prob *= 0.6; 
                break; 
            case 'D':
                prob *= 0.4; 
                break; 
            case'E':
                prob *= 0.2; 
                break; 
        }
        
    }
    printf("%lf\n", prob); 
    return 0;
}
