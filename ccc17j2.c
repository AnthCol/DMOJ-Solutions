#include <stdio.h>

int main() {
    int original, shifts; 
    scanf("%d %d", &original, &shifts);
    int multiplier = 10; 
    int sum = original; 
    for (int i = 0; i < shifts; i++){
        sum += original * multiplier; 
        multiplier *= 10; 
    }
    printf("%d", sum); 
    return 0;
}
