#include <stdio.h>

int main() {
    int total = 0; 
    scanf("%d", &total); 
    getchar(); 
    int count = 0; 
    int r; 
    int g; 
    int b; 
    
    
    for (int i = 0; i < total; i++){
        scanf("%d %d %d", &r, &g, &b); 
        getchar();
        if (r <= 255 && r >= 240){
            if (g >= 0 && g <= 200){
                if (b >= 95 && b <= 220){
                    count++; 
                }
            }
        }
        
    }
    
    printf("%d\n", count); 
    
    return 0;
}

