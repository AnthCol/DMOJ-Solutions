#include <stdio.h>

int main() {
    int num; 
    scanf("%d", &num); 
    int count = 0; 
    while (num != 1){
        if (num%2 == 0) num/=2; 
        else{
            num*=3;
            num++; 
        }
        count++; 
    }
    
    printf("%d\n", count);  
    return 0;
}
