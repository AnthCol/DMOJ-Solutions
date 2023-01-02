#include <bits/stdc++.h>
#define pb push_back
using namespace std;



int main(void){
    string input;
    string alphabet = "abcdefghijklmnopqrstuvwxyz"; 
    getline(cin, input); 


    int queries; 
    cin >> queries; 

    int left, right; 
    char letter; 

    int prefix[input.length()][26] = {0}; 

    for (int i = 0; i < (int)input.length(); i++){
        for (int x = 0; x < (int)alphabet.length(); x++){
            if (i != 0) prefix[i][x] = prefix[i-1][x]; 
            if (input.at(i) == alphabet.at(x)) prefix[i][x]++; 
        }
    }

    int letter_index; 
    
    for (int i = 0; i < queries; i++){
        cin >> left >> right >> letter; 

        for (int x = 0; x < (int)alphabet.length(); x++){
            if (alphabet.at(x) == letter){
                letter_index = x; 
                break; 
            }
        }

        right--; 
        left -= 2;  
        if (left < 0) printf("%d\n", prefix[right][letter_index]); 
        else printf("%d\n", prefix[right][letter_index] - prefix[left][letter_index]); 


    }

    return 0; 
}
