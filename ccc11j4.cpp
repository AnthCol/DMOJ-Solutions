#include <bits/stdc++.h>
#define pb push_back 
using namespace std;

int main(void) {
    vector<pair<int, int>> used; 
    pair<int, int> tempPair; 
    
    used.pb({0, -1}); 
    used.pb({0, -2}); 
    used.pb({0, -3}); 
    used.pb({1, -3});
    used.pb({2, -3});
    used.pb({3, -3});
    used.pb({3, -4});
    used.pb({3, -5});
    used.pb({4, -5});
    used.pb({5, -5});
    used.pb({5, -4});
    used.pb({5, -3});
    used.pb({6, -3});
    used.pb({7, -3});
    used.pb({7, -4});
    used.pb({7, -5});
    used.pb({7, -6});
    used.pb({7, -7});
    used.pb({6, -7});
    used.pb({5, -7});
    used.pb({4, -7});
    used.pb({3, -7});
    used.pb({2, -7});
    used.pb({1, -7});
    used.pb({0, -7});
    used.pb({-1, -7});
    used.pb({-1, -6});
    used.pb({-1, -5});
    
    int currX = -1; 
    int currY = -5; 
    
    char tempChar = 'q'; 
    int tempInt; 
    
    scanf("%c %d", &tempChar, &tempInt); 
    while (tempChar != 'q'){
        switch(tempChar){
            case 'l':
                for (int i = 0; i < tempInt; i++){
                    currX--; 
                    tempPair.first = currX; 
                    tempPair.second = currY; 
                    if (count(used.begin(), used.end(), tempPair)){
                        printf("%d %d DANGER\n", currX - tempInt + i + 1, currY); 
                        return 0; 
                    }
                    used.pb(tempPair); 
                }
                printf("%d %d safe\n", currX, currY); 
                break; 
            case 'd':
                for (int i = 0; i < tempInt; i++){
                    currY--; 
                    tempPair.first = currX; 
                    tempPair.second = currY; 
                    if (count(used.begin(), used.end(), tempPair)){
                        printf("%d %d DANGER\n", currX, currY - tempInt + i + 1); 
                        return 0; 
                    }
                    used.pb(tempPair); 
                }
                printf("%d %d safe\n", currX, currY); 
                break; 
            case 'r':
                for (int i = 0; i < tempInt; i++){
                    currX++; 
                    tempPair.first = currX; 
                    tempPair.second = currY; 
                    if (count(used.begin(), used.end(), tempPair)){
                        printf("%d %d DANGER\n", currX + tempInt - i - 1, currY); 
                        return 0; 
                    }
                    used.pb(tempPair); 
                }
                printf("%d %d safe\n", currX, currY); 
                break; 
            case 'u':
                for (int i = 0; i < tempInt; i++){
                    currY++; 
                    tempPair.first = currX; 
                    tempPair.second = currY; 
                    if (count(used.begin(), used.end(), tempPair)){
                        printf("%d %d DANGER\n", currX, currY + tempInt - i - 1); 
                        return 0; 
                    }
                    used.pb(tempPair); 
                }
                printf("%d %d safe\n", currX, currY); 
                break; 
        }
        scanf("%c %d", &tempChar, &tempInt); 
    }
    

    return 0;
}
