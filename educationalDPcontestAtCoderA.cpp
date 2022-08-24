#include <bits/stdc++.h>
#define infinity 2147483647
using namespace std;

int main() {
    
    
    int inputs; 
    scanf("%d", &inputs); 
    
    int ans[inputs + 1]; 
    int stones[inputs + 1]; 
    
    for (int i = 1; i <= inputs; i++){
        scanf("%d", &stones[i]); 
        ans[i] = infinity; 
    }
    
    ans[1] = 0; 
    
    for (int i = 1; i <= inputs; i++){
        if (i + 1 <= inputs) ans[i+1] = min(ans[i+1], ans[i] + abs(stones[i] - stones[i+1])); 
        //                              **EXPLANATION**
        // this checks if you should use the jump from 1 to 3, or the jump from 2 to 3
            //if i == 2 here
            // you check the following here:
            /*
                in the previous step, you check stepping once, 
                and you check stepping twice (when i == 1). 

                at that point you have
                ans[1] = 0 (no cost for starting on the first rock)
                ans[2] = 20 (cost for jumping from first to second)
                ans[3] = 30 (cost for jumping from first to third)

                then, when i == 2:

                you check the following:

                ans[2] = 20 currently - this will not change because we started from the base case and there is only one way to get here. 
                ans[3] = we already have a value for this. It is 30. It was ans[i+2] in the previous iteration. 
                Now it is ans[i+1]. 
                So, in the last iteration we considered if the best way to get here was a 2 step. 
                Now, we are considering if it is best to do the following:
                we are saying is it the lowest cost to get to this point as we currently did it (2 step), 
                of is it best that we take two one steps min(ans[i] + abs(stones[i] - stones[i+1]); 
                ans[i] here represents the optimal cost from step one to two, now we want to know if
                you have two choices:
                the fastes way to get to dp[3] is either:
                current ans[3] (2 step)
                OR
                ans[2] + abs(stones[2] - stones[3])  (double single step - step from stones[1] to stones[2] and stones[2] to stones[3]; 


                At this point, when the minimum function is finished, you have solved the subproblem of finding the cheapest way to get to step 3. 
                Now, as you go through the rest of the inputs 

            */
        if (i + 2 <= inputs) ans[i+2] = min(ans[i+2], ans[i] + abs(stones[i] - stones[i+2])); 
    }
    
    printf("%d\n", ans[inputs]); 
    
    return 0;
}
