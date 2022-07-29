#include <stdio.h>

int main() {
    int reg, small, total; 
    scanf("%d %d", &reg, &small); 
    total = 0; 
    total += (reg*8) + (small*3); 
    printf("%d\n", total-28); 
    return 0;
}
