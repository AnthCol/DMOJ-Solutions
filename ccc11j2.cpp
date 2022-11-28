#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    
    int humidity, max_hours; 
    scanf("%d %d", &humidity, &max_hours); 
    
    int altitude; 
    int i; 
    for (i = 1; i < 240; i++){
        if (i > max_hours){
            printf("The balloon does not touch ground in the given time.\n"); 
            return 0; 
        }
        
        altitude = (-6*(pow(i, 4))) + (humidity * (pow(i, 3))) + (2 * (pow(i, 2))) + i; 
        
        if (altitude <= 0){
            printf("The balloon first touches ground at hour:\n%d\n", i);
            return 0; 
        }
        
    }
    
    printf("The balloon does not touch ground in the given time.\n"); 
    
    return 0;
}
