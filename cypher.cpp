#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    int size, temp; 
    char tempChar; 
    vector<char> letters; 
    vector<int> order;
    scanf("%d", &size); 
    char answer[size + 1];
    
    for (int i = 0; i < size; i++){
        scanf(" %c", &tempChar); 
        getchar(); 
        letters.pb(tempChar); 
    }
    
    for (int i = 0; i < size; i++){
        scanf("%d", &temp); 
        answer[temp - 1] = letters.at(i); 
    }
    for (int i = 0; i < size; i++){
        printf("%c", answer[i]); 
    }
    
    
    printf("\n"); 
    return 0;
}
