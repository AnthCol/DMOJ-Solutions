import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        long sum = 0; 
        int total = scanner.nextInt(); 
        scanner.nextLine(); 
        String[] array = new String[total]; 
        String temp = ""; 
        String temp2 = ""; 
        int tempI = 0; 
        int temp2I = 0; 
        for (int i = 0; i < total; i++){
            array[i] = scanner.nextLine(); 
            for (int x = 0; x < array[i].length() - 1; x++){
                temp += array[i].charAt(x); 
            }
            temp2 += array[i].charAt(array[i].length() - 1); 
            tempI = Integer.parseInt(temp); 
            temp2I = Integer.parseInt(temp2); 
            
            sum += Math.pow(tempI, temp2I); 
            
            temp = ""; 
            temp2 = ""; 
            
            
            
        }
        
        scanner.close(); 
     
        
        
        System.out.println(sum); 
        
        
        
        
        return; 
    }
}
