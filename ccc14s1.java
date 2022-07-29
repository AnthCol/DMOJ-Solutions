import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        
        int total = scanner.nextInt(); 
        int[] array = new int[total]; 
        for (int i = 0; i < total; i++){
            array[i] = i + 1; 
        }
        int rounds = scanner.nextInt(); 
        int[] removals = new int[rounds]; 
        for (int i = 0; i < rounds; i++){
            removals[i] = scanner.nextInt(); 
        }
        scanner.close(); 
        int count = 1; 
        
        for (int i = 0; i < rounds; i++){
        
            for (int x = 0; x < total; x++){
                if (count == removals[i] && array[x] != -1){
                    array[x] = -1; 
                    count = 1; 
                }
                else if (array[x] != -1){
                    count++; 
                }
            }
            count = 1; 
            
        }
        
        
        for (int i = 0; i < total; i++){
            if (array[i] != -1) System.out.println(array[i]); 
        }
        
        
        return; 
    }
}
