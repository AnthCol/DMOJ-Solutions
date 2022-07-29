import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int[] array = new int[3]; 
        array[0] = scanner.nextInt(); 
        array[1] = scanner.nextInt(); 
        array[2] = scanner.nextInt();
        
        Arrays.sort(array); 
        System.out.println(array[1]); 
        
        
        
        return; 
    }
}
