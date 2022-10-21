#include <bits/stdc++.h>
#define pb push_back

using namespace std; 

int main(void){
    double temp1, temp2; 
    char * input = (char*)malloc(sizeof(char) * 51); 
    fgets(input, 51, stdin); 
    char *token = strtok(input, " "); 
    stack <double> vals; 
    
    while (token){
        
        if (isdigit(token[0])) vals.push((double)atoi(token)); 
        else{
            temp1 = vals.top(); 
            vals.pop();
            temp2 = vals.top();
            vals.pop(); 
            
            switch(token[0]){
                case '+': vals.push(temp2 + temp1); break; 
                case '-': vals.push(temp2 - temp1); break; 
                case '/': vals.push(temp2 / temp1); break; 
                case '*': vals.push(temp2 * temp1); break; 
                case '%': vals.push(fmod(temp2, temp1)); break; 
                case '^': vals.push(pow(temp2, temp1)); break; 
            }
        }
        
        token = strtok(NULL, " "); 
    }
    

    
    double ans = (double)vals.top(); 
    vals.pop(); 
    free(input); 
    
    printf("%0.1lf\n", ans); 
    
    return 0; 
}
