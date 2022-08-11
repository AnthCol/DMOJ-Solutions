#include <bits/stdc++.h>

using namespace std;

int main() {
    int input = -1; 
    int location = 1; 
    
    while (input != 0){
        cin >> input; 
        
        if (input == 0) break; 
        
        location += input; 
        
        switch(location){
            case 9: location = 34; break; 
            case 40: location = 64; break; 
            case 54: location = 19; break; 
            case 67: location = 86; break; 
            case 90: location = 48; break; 
            case 99: location = 77; break; 
        }
        
        if (location == 100){
            printf("You are now on square 100\n"); 
            printf("You Win!"); 
            return 0; 
        }
        else if (location > 100){
            location -= input; 
            printf("You are now on square %d\n", location); 
        }
        else printf("You are now on square %d\n", location); 
        
    }
    printf("You Quit!\n"); 
    return 0;
}
