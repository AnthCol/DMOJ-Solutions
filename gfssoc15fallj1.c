#include <stdio.h>
#include <stdlib.h>

int main() {
    int yup, total; 
    scanf("%d", &yup); 
    getchar(); 
    scanf("%d", &total); 
    getchar(); 
    int yoSWAG[total]; 
    for (int i = 0; i < total; i++){
        scanf("%d", &yoSWAG[i]); 
        getchar(); 
    }
    for (int i = 0; i < total; i++){
        if (abs(yoSWAG[i] - yup) <= 100) printf("fite me! >:3\n"); 
        else printf("go away! 3:<\n"); 
    }
    return 0;
}
