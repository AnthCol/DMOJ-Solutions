#include <bits/stdc++.h>
#define pb push_back
using namespace std;


int main(void){
    
    vector<string> starts[10]; 
    string tempString; 
    int count = 0, temp, length; 
    
    for (int i = 0; i < 50000; i++){
        tempString = to_string(i); 
        for (int x = 0; x < tempString.length(); x++){
            count += (int)tempString.at(x) - 48;  // count acts as digits sum here 
        }
        tempString = to_string((i * count)%99999); 
        starts[(int)tempString.at(0) - 48].pb(tempString);
        count = 0; 
    }
    
    
    for (int i = 0; i < 5; i++){
        cin >> tempString; 
        temp = (int)tempString.at(0) - 48; 
        length = tempString.length(); 
        if (length == 1) printf("%d\n", (int)starts[temp].size()); 
        else{
            for (int i = 0; i < (int)starts[temp].size(); i++){
                while (starts[temp][i].length() < length){ // skipping ahead to the pieces of information that really matter. 
                    i++; 
                }
                if (starts[temp][i].substr(0, length) == tempString) count++; 
            }
            printf("%d\n", count); 
            count = 0; 
        }
    }


    return 0; 
}
