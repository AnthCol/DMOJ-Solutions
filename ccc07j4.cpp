#include <bits/stdc++.h>

using namespace std;

int main() {
    string one, two; 
    getline(cin, one); 
    getline(cin, two); 
    
    
    int countOne [26]; 
    int countTwo [26]; 
    for (int i = 0; i < 26; i++){
        countOne[i] = 0; 
        countTwo[i] = 0; 
    }
    for (long long unsigned i = 0; i < one.length(); i++){
        switch(one[i]){
            case 'A': countOne[0]++; break; 
            case 'B': countOne[1]++; break; 
            case 'C': countOne[2]++; break; 
            case 'D': countOne[3]++; break; 
            case 'E': countOne[4]++; break; 
            case 'F': countOne[5]++; break; 
            case 'G': countOne[6]++; break; 
            case 'H': countOne[7]++; break; 
            case 'I': countOne[8]++; break; 
            case 'J': countOne[9]++; break; 
            case 'K': countOne[10]++; break; 
            case 'L': countOne[11]++; break; 
            case 'M': countOne[12]++; break; 
            case 'N': countOne[13]++; break; 
            case 'O': countOne[14]++; break; 
            case 'P': countOne[15]++; break; 
            case 'Q': countOne[16]++; break; 
            case 'R': countOne[17]++; break; 
            case 'S': countOne[18]++; break; 
            case 'T': countOne[19]++; break; 
            case 'U': countOne[20]++; break; 
            case 'V': countOne[21]++; break; 
            case 'W': countOne[22]++; break; 
            case 'X': countOne[23]++; break; 
            case 'Y': countOne[24]++; break; 
            case 'Z': countOne[25]++; break; 
        }
    }
    for (long long unsigned i = 0; i < two.length(); i++){
        switch(two[i]){
            case 'A': countTwo[0]++; break; 
            case 'B': countTwo[1]++; break; 
            case 'C': countTwo[2]++; break; 
            case 'D': countTwo[3]++; break; 
            case 'E': countTwo[4]++; break; 
            case 'F': countTwo[5]++; break; 
            case 'G': countTwo[6]++; break; 
            case 'H': countTwo[7]++; break; 
            case 'I': countTwo[8]++; break; 
            case 'J': countTwo[9]++; break; 
            case 'K': countTwo[10]++; break; 
            case 'L': countTwo[11]++; break; 
            case 'M': countTwo[12]++; break; 
            case 'N': countTwo[13]++; break; 
            case 'O': countTwo[14]++; break; 
            case 'P': countTwo[15]++; break; 
            case 'Q': countTwo[16]++; break; 
            case 'R': countTwo[17]++; break; 
            case 'S': countTwo[18]++; break; 
            case 'T': countTwo[19]++; break; 
            case 'U': countTwo[20]++; break; 
            case 'V': countTwo[21]++; break; 
            case 'W': countTwo[22]++; break; 
            case 'X': countTwo[23]++; break; 
            case 'Y': countTwo[24]++; break; 
            case 'Z': countTwo[25]++; break; 

        }
    }
    
    for (int i = 0; i < 26; i++){
        if (countOne[i] != countTwo[i]){
            printf("Is not an anagram.\n"); 
            return 0; 
        }
    }
    printf("Is an anagram.\n"); 
    
    
    return 0;
}
