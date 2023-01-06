#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    int t, c, temp; 
    scanf("%d %d", &t, &c); 
    vector<int> chores; 
    for (int i = 0; i < c; i++){
        scanf("%d", &temp); 
        chores.pb(temp); 
    }
    
    sort(chores.begin(), chores.end()); 
    
    int count = 0, sum = 0; 
    for (int i = 0; i < c; i++){
        if (sum + chores[i] > t) break; 
        sum += chores[i]; 
        count++; 
    }
    
    printf("%d\n", count); 
    
    
    return 0;
}
