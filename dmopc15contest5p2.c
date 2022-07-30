#include <stdio.h>
#include <math.h>


int main(void){
    long double sum = 0, temp = 0; 
    int inputs; 
    scanf("%d", &inputs); 
    for (int i = 0; i < inputs; i++){
        scanf("%Lf", &temp); 
        sum += fmodl(temp, 360); 
    }
    printf("%0.6Lf\n", fmodl(sum, 360)); 
    
    
    return 0; 
}
