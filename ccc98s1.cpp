#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int inputs; 
    cin >> inputs; 
    string answer = ""; 
    string temp = ""; 
    for (int i = 0; i < inputs; i++){
        getline(cin >> ws, temp); 
        answer += temp; 
        answer += "\n"; 
    }
    inputs = 0; 
    for (long long unsigned i = 0; i < answer.length() - 6; i++){
        if (answer[i] == ' ' || answer[i] == '\n'){
            if (inputs == 4){
                answer[i - 4] = '*'; 
                answer[i - 3] = '*'; 
                answer[i - 2] = '*'; 
                answer[i - 1] = '*'; 
            }
            inputs = 0; 
        } 
        else inputs++; 
    }
    
    cout << answer; 
    
    return 0;
}
