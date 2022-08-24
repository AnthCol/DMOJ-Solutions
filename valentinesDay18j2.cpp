#include <bits/stdc++.h>

using namespace std;

int main() {
    int count = 1; 
    int required, first, sub; 
    scanf("%d %d %d", &required, &first, &sub); 
    
    int running = first, prev = first; 
    
    while (running < required){
        if (running + running >= required){
            printf("%d\n", count); 
            return 0; 
        }
        prev-=sub; 
        if (prev < 0){
            printf("RIP\n"); 
            return 0; 
        }
        running += prev; 
        count++; 
    }
    
    return 0;
}
