#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    
    int first, second, length = 2; 
    scanf("%d %d", &first, &second); 
    vector<int> vals; 
    vals.pb(first); 
    vals.pb(second); 
    while (1){
        vals.pb(vals[length-2] - vals[length-1]); 
        length++; 
        if (vals[length-1] > vals[length-2]) break; 
    }
    printf("%d\n", length); 
    return 0;
}
