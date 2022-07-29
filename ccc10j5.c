#include <stdio.h>
#include <stdlib.h>

int main() {
    int xOG; 
    int yOG; 
    int xTarg; 
    int yTarg; 
    int diff; 
    scanf("%d %d %d %d", &xOG, &yOG, &xTarg, &yTarg);

    diff = abs(xOG - xTarg) + abs(yOG - yTarg);
      
    if (diff%2 == 0){
        if (diff == 0){
            printf("0"); 
        }
        else if (diff == 2){
            if (abs(xOG-xTarg) == 0 || abs(yOG - yTarg) == 0){
                printf("2"); 
            }
            else{
                printf("4"); 
            }
        }
        else if (diff == 4){
            if (abs(xOG-xTarg) == abs(yOG - yTarg)){
                printf("4"); 
            }
            else{
                printf("2"); 
            }
        }
   
        else if (diff == 6){
            if (abs(xOG-xTarg) == 0 || abs(yOG - yTarg) == 0){
                printf("4"); 
            }
            else{
                printf("3"); 
            }
        } 
        else if (diff == 14){
            printf("6"); 
        }
        else{
            printf("4"); 
        }
    }
    else if (diff%2 == 1 && diff <= 9){
        if (diff == 3){
            if (abs(xOG-xTarg) == 0 || abs(yOG - yTarg) == 0){
                printf("3"); 
            }
            else{
                printf("1"); 
            }
        }
        else if (diff == 7){
            if (abs(xOG-xTarg) == 0 || abs(yOG - yTarg) == 0){
                printf("5"); 
            }
            else{
                printf("3"); 
            }
        }
        else{
            printf("3"); 
        }
    }
    else{
        printf("5"); 
    }

    
    return 0;
}
