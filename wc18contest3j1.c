#include <stdio.h>

int main() {
    int paint, need, cashola; 
    scanf("%d %d %d", &paint, &need, &cashola); 
    printf("%d\n", ((paint/need)*cashola) + paint%need); 
    return 0;
}
