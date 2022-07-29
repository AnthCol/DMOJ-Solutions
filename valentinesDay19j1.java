import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner (System.in); 
        int total = scanner.nextInt(); 
        int[] array = new int[total]; 
        for (int i = 0; i < total; i++){
            array[i] = scanner.nextInt(); 
        }
        scanner.close(); 
        
        for (int i = 0; i < total; i++){
            if (array[i] < 1000) System.out.println("Newbie"); 
            else if (array[i] < 1200) System.out.println("Amateur"); 
            else if (array[i] < 1500) System.out.println("Expert"); 
            else if (array[i] < 1800) System.out.println("Candidate Master"); 
            else if (array[i] < 2200) System.out.println("Master"); 
            else if (array[i] < 3000) System.out.println("Grandmaster"); 
            else if (array[i] < 4000) System.out.println("Target"); 
            else System.out.println("Rainbow Master"); 
        }
    
        return; 
    }
}
