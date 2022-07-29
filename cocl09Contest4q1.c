#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main() {
    char tempString[101]; 
    char printString[100]; 
    int j = 0; 
    fgets(tempString, 101, stdin); 
    for (int i = 0; i < strlen(tempString); i++){
        if (isupper(tempString[i])){
            printString[j] = tempString[i]; 
            j++; 
        }
    }
    printString[j] = '\0'; 
    printf("%s", printString); 
    return 0;
}
