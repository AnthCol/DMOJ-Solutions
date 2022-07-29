#include <stdio.h>
#include <string.h>
int main() {
    char tempString[256];
    char tempString2[256]; 
    int lowest = 201; 
    int tempInt; 
    strcpy(tempString, "temp"); 
    while (strcmp(tempString, "Waterloo") != 0){
        scanf("%s %d", tempString, &tempInt); 
        if (tempInt < lowest){
            lowest = tempInt; 
            strcpy(tempString2, tempString); 
        }
    }
    
    printf("%s", tempString2); 
    return 0;
}
