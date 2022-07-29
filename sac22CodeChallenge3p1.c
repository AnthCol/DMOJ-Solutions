#include <stdio.h>

int main() {
    int length, minus, visits; 
    scanf("%d %d %d", &length, &minus, &visits); 
    for (int i = 0; i < visits; i++){
        length -= minus; 
        printf("%d\n", length); 
    }
    return 0;
}
