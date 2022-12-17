#include <bits/stdc++.h>
#define pb push_back
using namespace std; 


int room_size = 0; 
vector<vector<char>> house; 
vector<vector<int>> visited; 


int is_valid(int row, int column){
    if (row == (int)house.size() || column == (int)house[0].size()) return 0; 
    if (row < 0 || column < 0) return 0; 
    if (visited[row][column]) return 0; 
    if (house[row][column] == '#') return 0; 
    return 1; 

}

void dfs (int row, int column){
    visited[row][column] = 1; 
    room_size++; 
    int rp1 = row + 1; 
    int cp1 = column + 1; 
    int rm1 = row - 1; 
    int cm1 = column - 1; 

    if (is_valid(rp1, column)) dfs(rp1, column); 
    if (is_valid(row, cp1)) dfs(row, cp1); 
    if (is_valid(rm1, column)) dfs(rm1, column); 
    if (is_valid(row, cm1)) dfs(row, cm1); 
  
}

struct three {
    int num, r, c; 
}; 

int main(void){

    int rows, columns; 
    scanf("%d %d", &rows, &columns); 

    char temp_char; 
    vector<char> temp_vec; 
    vector<int> temp_int_vec; 
    

    vector<three> locations; 

    for (int i = 0; i < rows; i++){
        for (int x = 0; x < columns; x++){
            scanf(" %c", &temp_char); 
            if (isdigit(temp_char)) locations.pb({(int)temp_char - 48, i, x}); 
            temp_vec.pb(temp_char); 
            temp_int_vec.pb(0); 
        }
        visited.pb(temp_int_vec); 
        house.pb(temp_vec); 
        temp_int_vec.clear(); 
        temp_vec.clear(); 
    }

    
    // bubble sort the tuple thing 
    for (int i = 0; i < (int)locations.size() - 1; i++){
        for (int x = 0, temp_int; x < (int)locations.size() - i - 1; x++){
            if (locations[x].num > locations[x + 1].num){
                temp_int = locations[x].num; 
                locations[x].num = locations[x + 1].num; 
                locations[x + 1].num = temp_int; 

                temp_int = locations[x].r; 
                locations[x].r = locations[x + 1].r; 
                locations[x + 1].r = temp_int; 

                temp_int = locations[x].c; 
                locations[x].c = locations[x + 1].c; 
                locations[x + 1].c = temp_int; 
            }
        }
    }



    for (int i = 0; i < (int)locations.size(); i++){
        dfs(locations[i].r, locations[i].c); 
        printf("%d\n", room_size); 
        room_size = 0; 
    }

    return 0; 
}


