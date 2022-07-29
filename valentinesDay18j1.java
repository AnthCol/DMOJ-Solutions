import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int total = scanner.nextInt(); 
        scanner.nextLine(); 
        double max = 0; 
        double[] array = new double[total]; 
        
        for (int i = 0; i < total; i++){
            array[i] = scanner.nextDouble(); 
            array[i] /= 1000; 
            if (array[i] > max) max = array[i]; 
        }
        
        if (max > 10){
            System.out.println("Something is wrong with these cuteness values"); 
        }
        else if (max > 1){
            System.out.println("Cuteness by definition is similarity to Cactus"); 
        }
        else{
            System.out.println("Cuteness by definition is similarity to Carol"); 
        }
    
        return; 
    }
}
