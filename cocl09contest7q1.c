#include <stdio.h>

int main() {
    int hours, mins; 
    scanf("%d %d", &hours, &mins); 
    mins -= 45; 
    if (mins < 0){
        if (hours == 0){
            hours = 23; 
        }
        else hours--; 
        mins = 60 + mins;
    }
    printf("%d %d\n", hours, mins); 
    return 0;
}
