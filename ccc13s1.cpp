#include <bits/stdc++.h>

using namespace std;

int main() {
    int num, check = 0; 
    scanf("%d", &num); 
    num++; 
    vector<char> counts; 
    string tempString; 
    while (num < INT_MAX){
        tempString = to_string(num); 
        for (int i = 0; i < (int)tempString.length(); i++){
            counts.push_back(tempString.at(i)); 
            if (count(counts.begin(), counts.end(), tempString.at(i)) > 1){
                check = 1; 
                break; 
            }
        }
        if (check == 0){
            printf("%d", num); 
            break; 
        }
        check = 0; 
        num++; 
        counts.clear(); 
    }
    
    return 0;
}
