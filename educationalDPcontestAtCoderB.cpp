#include <bits/stdc++.h>
#define infinity 2147483647
using namespace std;

int main() {


    int inputs, upTo; 
    scanf("%d %d", &inputs, &upTo); 

    int ans[inputs + 1]; 
    int stones[inputs + 1]; 

    for (int i = 1; i <= inputs; i++){
        scanf("%d", &stones[i]); 
        ans[i] = infinity; 
    }

    ans[1] = 0; 

    for (int i = 1; i <= inputs; i++){
        for (int x = 1; x <= upTo; x++){
            if (i + x <= inputs) ans[i + x] = min(ans[i+x], ans[i] + abs(stones[i] - stones[i+x]));
        }
    }

    printf("%d\n", ans[inputs]); 

    return 0;
}
