#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {

    string input; 
    vector<string> tokens; 
    vector<string> finalTokens; 
    getline(cin, input); 
    string newString = ""; 
    string finalString = ""; 
    int consCount = 0; 
    
    // first parse all, then go through the tokens again and remove dupes. 
    for (int i = 0; i < (int)input.length(); i++){
        if (input.at(i) == '-'){
            tokens.pb(newString);  
            newString = ""; 
            consCount = 0; 
            // the else here parses for consonants dupes. 
        }
        else{
            if (input.at(i) != 'a' && input.at(i) != 'e' && input.at(i) != 'i' && input.at(i) != 'o' && input.at(i) != 'u'){
                consCount++; 
                if (consCount < 2) newString += input.at(i); 
            }
            else{
                newString += input.at(i); 
                consCount = 0; 
            }
        }
    }
    tokens.pb(newString); 
    finalTokens.pb(tokens.at(0)); 
    newString = tokens.at(0); 
    
    // at this point newString represents the previous string
    for (int i = 1; i < (int)tokens.size(); i++){
        if (tokens.at(i) != newString) finalTokens.pb(tokens.at(i)); 
        newString = tokens.at(i); 
    }
    for (int i = 0; i < (int)finalTokens.size(); i++){
        if (i + 1 != (int)finalTokens.size()) finalString += finalTokens.at(i) + "-"; 
        else finalString += finalTokens.at(i); 
    }

    
    cout << finalString << endl; 
    
    
    return 0;
}
