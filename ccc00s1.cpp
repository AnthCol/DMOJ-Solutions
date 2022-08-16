#include <bits/stdc++.h>

using namespace std;

int main() {
    int quarters, m1, m2, m3, count = 0; 
    
    cin >> quarters >> m1 >> m2 >> m3; 

    while (quarters > 0){
        
        
        m1++; 
        quarters--; 
        count++; 
        if (quarters == 0){
            if (m1 == 35){
                quarters += 30;
                m1 = 0; 
            }
            if (quarters == 0) break; 
        }
        
        m2++; 
        quarters--; 
        count++; 
        if (quarters == 0){
            if (m2 == 100){
                m2 = 0; 
                quarters += 60;
            }
            if (quarters == 0) break; 
        }
        
        m3++; 
        quarters--; 
        count++; 
        if (quarters == 0){
            if (m3 == 10){
                m3 = 0; 
                quarters += 9; 
            }
            if (quarters == 0) break; 
        }
        
        
        if (m1 == 35){
            m1 = 0; 
            quarters += 30; 
        }
        if (m2 == 100){
            m2 = 0; 
            quarters += 60; 
        }
        if (m3 == 10){
            m3 = 0; 
            quarters += 9; 
        }
    }
    cout << "Martha plays " << count << " times before going broke.\n"; 
    return 0;
}
