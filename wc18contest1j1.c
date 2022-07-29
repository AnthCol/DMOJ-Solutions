#include <stdio.h>

int main() {
    int totalTime; 
    int questions; 
    int timePer; 
    scanf("%d%d%d", &questions, &timePer, &totalTime); 
    if (totalTime - (questions*timePer) >=0 ) printf("Y"); 
    else printf("N"); 
    return 0;
}
