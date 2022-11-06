#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    int yes, no, total, count = 0; 
    double ratio;
    for (int i = 0; i < 5; i++){
        scanf("%d %d", &yes, &no); 
        total = yes + no; 
        ratio = ((double)yes/(double)total)*100; 
        ratio /= 10; 
    
        for (count = 0; count < (int)ratio; count++){
            printf("*"); 
        }
        while (count < 10){
            printf("."); 
            count++; 
        }
        
        printf("\n"); 
        
    }
    
    
    return 0;
}
