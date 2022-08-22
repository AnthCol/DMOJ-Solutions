#include <bits/stdc++.h>

using namespace std;


int main() {
    int inputs, temp1, temp2, count = 0;
    
    scanf("%d", &inputs); 
 
    vector<int> adjacent[10000]; 
    
    for (int i = 0; i < inputs; i++){
        scanf("%d %d", &temp1, &temp2); 
        adjacent[temp1].push_back(temp2); 
    }
    
    temp1 = -1; 
    temp2 = -1; 
    
    while (temp1 != 0 && temp2 != 0){
        
        scanf("%d %d", &temp1, &temp2);
        
        if (temp1 == 0 && temp2 == 0) break; 
     
        while (count < inputs){
            if (adjacent[temp1].front() == temp2) {
                printf("Yes %d\n", count); 
                break; 
            }
            temp1 = adjacent[temp1].front(); 
            count++; 
        }
        
        if (count == inputs) printf("No\n");
        

        count = 0; 
    }
    
    
    return 0;
}
