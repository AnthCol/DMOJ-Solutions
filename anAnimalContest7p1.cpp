#include <bits/stdc++.h>
using namespace std;

int main(void) {
    
    int inputs, width, height; 
    scanf("%d", &inputs); 
    
    for (int i = 0; i < inputs; i++){
        scanf("%d %d", &width, &height); 
        if (width < 4 && height < 4) printf("bad\n"); 
        else if (width == 1) printf("bad\n"); 
        else if (height == 1){
            if (width >= 7) printf("good\n"); 
            else printf("bad\n"); 
        }
        else printf("good\n"); 
        
    }
    
    return 0;
}
