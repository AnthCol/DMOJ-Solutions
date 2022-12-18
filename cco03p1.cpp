#include <bits/stdc++.h>
#define pb push_back
using namespace std; 


int main (void){
    int memory_cells[30000] = {0}; 

    int pointer_index = 0, index = 0; 

    string program = ""; 
    char temp; 

    vector <pair <int, int>> brackets;  // pair <start, end>
    stack <int> bracket_stack; 
    
    scanf(" %c", &temp); 

    while (temp != '#'){
        switch(temp){
            case '>': program += temp; break; 
            case '<': program += temp; break; 
            case '+': program += temp; break; 
            case '-': program += temp; break; 
            case '[': program += temp; break; 
            case ']': program += temp; break; 
            case '.': program += temp; break; 
        }
        scanf(" %c", &temp); 
    }

    program += temp; 

    while (program.at(index) != '#'){
        if (program.at(index) == '['){
            bracket_stack.push(index); 
        }
        else if (program.at(index) == ']'){
            brackets.pb({bracket_stack.top(), index}); 
            bracket_stack.pop(); 
        }
        index++; 
    }

    for (int i = 0; i < (int)program.length(); i++){
        switch(program.at(i)){
            case '>': pointer_index++; break; 
            case '<': pointer_index--; break; 
            case '+': 
                memory_cells[pointer_index]++; 
                if (memory_cells[pointer_index] > 255) memory_cells[pointer_index] = 0; 
                break; 
            case '-':
                memory_cells[pointer_index]--; 
                if (memory_cells[pointer_index] < 0) memory_cells[pointer_index] = 255; 
                break; 
            case '[':  
                if (memory_cells[pointer_index] == 0){
                    for (int x = 0; x < (int)brackets.size(); x++){
                        if (brackets[x].first == i){
                            i = brackets[x].second; 
                            break; 
                        }
                    }
                }
                break; 
            case ']': 
                if (memory_cells[pointer_index] != 0){
                    for (int x = 0; x < (int)brackets.size(); x++){
                        if (brackets[x].second == i){
                            i = brackets[x].first; 
                            break; 
                        }
                    }
                }
                break; 
            case '.': printf("%c", memory_cells[pointer_index]); break; 
            default: break; 

        }
    }

    return 0; 
}
