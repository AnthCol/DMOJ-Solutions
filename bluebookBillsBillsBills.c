#include <stdio.h>

int main() {
    int account, measure1, measure2; 
    account = 0; 
    int temp = 0; 
    double sum = 0; 
    while (account > -1){
        scanf("%d", &account); 
        if (account < 0){
            return 0; 
        }
        getchar(); 
        scanf("%d %d", &measure1, &measure2); 
        getchar(); 
        if (measure2 < measure1){
            temp += 10000 - measure1; 
            temp += measure2; 
        }
        else{
            temp += measure2 - measure1; 
        }
        
        for (int i = 1; i <= temp; i++){
            if (i <= 10){
                sum += 6.59;
                i = 10; 
            }
            else if (i <= 30) sum += 0.2373; 
            else if (i <= 85) sum += 0.2271; 
            else if (i <= 170) sum += 0.2178; 
            else sum += 0.2085; 
        }
        printf("Account #: %d\n", account); 
        printf("Bill: %0.2lf\n", sum); 
        temp = 0; 
        sum = 0; 
    }
    return 0;
}
