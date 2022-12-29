#include <bits/stdc++.h>
#define pb push_back
using namespace std;

int main(void) {
    
    int cases; 
    cin >> cases; 
    
    vector<vector<char>> info; 
    vector<char> temp; 
    char temp_char; 
    
    for (int i = 0; i < 5; i++){
        for (int x = 0; x < 5; x++){
            cin >> temp_char; 
            temp.pb(temp_char); 
        }
        
        info.pb(temp); 
        temp.clear(); 
    }
    
    string input; 
    string build; 
    
    int index1, index2; 
    
    for (int i = 0; i < cases; i++){
        cin >> input; 
        for (int x = 0; x < (int)input.length(); x+=2){
            if (input.at(x) != 'A' 
             && input.at(x) != 'B'
             && input.at(x) != 'C' 
             && input.at(x) != 'D'
             && input.at(x) != 'E'){
                
                build += input.at(x);    
                x--;  
            }
            else{
                switch(input.at(x)){
                    case 'A': index1 = 0; break; 
                    case 'B': index1 = 1; break; 
                    case 'C': index1 = 2; break; 
                    case 'D': index1 = 3; break; 
                    case 'E': index1 = 4; break; 
                }
            
                switch(input.at(x+1)){
                    case '1': index2 = 0; break; 
                    case '2': index2 = 1; break; 
                    case '3': index2 = 2; break; 
                    case '4': index2 = 3; break; 
                    case '5': index2 = 4; break; 
                }
                
                
                build += info[index1][index2]; 
                
                
            }
            
        }
        
        cout << build << endl; 
        build = ""; 
    }
    
    return 0;
}
