import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int count = 1; 
        int inputs = scanner.nextInt(); 
        int[] array = new int[inputs]; 
        for (int i = 0; i < inputs; i++){
            array[i] = scanner.nextInt(); 
        }
        Arrays.sort(array); 
        
        for (int i = 0; i < inputs - 1; i++){
            if (array[i] != array[i+1]) count++; 
        }
        System.out.println(count); 
        
        
        
        
        
        return; 
    }
}
