import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        String temp = ""; 
        int total = scanner.nextInt(); 
        String[] array = new String[total]; 
        for (int i = 0; i < total; i++){
            array[i] = scanner.next(); 
        }
        for (int i = 0; i < total; i++){
            for (int x = 0; x < array[i].length(); x++){
                if (array[i].charAt(x) == 'O'){
                    temp += "Organization of Ontario"; 
                    x++; 
                }
                else if (array[i].charAt(x) == 'E') temp += "Educational"; 
                else temp += "Computing"; 
                
                
                temp += " "; 
            }
            System.out.println(temp); 
            temp = ""; 
        }
    
    
    
    
        return; 
    }
}
