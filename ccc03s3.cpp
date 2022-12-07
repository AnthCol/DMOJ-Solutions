#include <bits/stdc++.h>
#define pb push_back

using namespace std; 

// CCC '03 S3 - Floor Plan 

int max_c, max_r; 
int room_size = 1; 
char house[25][25]; 
int visited[25][25]; 

int is_valid(int row, int column){
    if (row < 0 || column < 0 || column >= max_c || row >= max_r) return 0; // make sure it's within the boundary
    if (visited[row][column]) return 0;   // make sure it's unvisited 
    if (house[row][column] == 'I') return 0; // make sure it's not a wall 
    room_size++; // add 1 to room size 
    return 1; 
}


void dfs(int row, int column){
    visited[row][column] = 1; 
    // SCANS THE WHOLE ROOM WITH DFS [explore all options]
    if (is_valid(row + 1, column)) dfs(row + 1, column); 
    if (is_valid(row, column + 1)) dfs(row, column + 1); 
    if (is_valid(row - 1, column)) dfs(row - 1, column); 
    if (is_valid(row, column - 1)) dfs(row, column - 1); 
}


int main(void){
    int flooring; 
    cin >> flooring >> max_r >> max_c; 

    vector<int> room_sizes; 


    for (int i = 0; i < max_r; i++){
        for (int x = 0; x < max_c; x++){
            cin >> house[i][x]; 
            visited[i][x] = 0; 
        }

    }

    int rooms = 0; 

    for (int i = 0; i < max_r; i++){
        for (int x = 0; x < max_c; x++){ 
            if (!visited[i][x] && house[i][x] != 'I'){
                dfs(i, x); 
                room_sizes.pb(room_size); 
                room_size = 1; 
            }
        }
    }




    sort(room_sizes.begin(), room_sizes.end());

    int sum = 0; 

    for (int i = room_sizes.size() - 1; i >= 0; i--){
        if (sum + room_sizes[i] <= flooring){
            rooms++; 
            sum += room_sizes[i]; 
        }
        else if (sum + room_sizes[i] > flooring) break; 
    }


    if (rooms == 1) printf("%d room, ", rooms); 
    else printf("%d rooms, ", rooms); 

    printf("%d square metre(s) left over\n", flooring - sum); 


    return 0; 
}


