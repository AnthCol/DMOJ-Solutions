import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int total = scanner.nextInt(); 
        int temp1 = 0; 
        int temp2 = 0; 
        int[] array = new int[total]; 
        for (int i = 0; i < total; i++){
            temp1 = scanner.nextInt(); 
            temp2 = scanner.nextInt(); 
            array[i] = temp1 + temp2; 
        }
        
        for (int i = 0; i < total; i++){
            System.out.println(array[i]); 
        }
        
        scanner.close(); 
        
        
        
        
        return; 
    }
}
