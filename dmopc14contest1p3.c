#include <stdio.h>

int main() {
    int OGs, bozos; 
    scanf("%d", &OGs); 
    double temp, avg = 0; 
    
    for (int i = 0; i < OGs; i++){
        scanf("%lf", &temp); 
        avg += temp; 
    }
    scanf("%d", &bozos); 
    for (int i = 0; i < bozos; i++){
        scanf("%lf", &temp); 
        avg += temp; 
        printf("%0.3lf\n", avg/(i + 1 + OGs)); 
    }
    
    return 0;
}
