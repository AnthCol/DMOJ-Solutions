import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in); 
        int total = 91; 
        int num = 1; 
        for (int i = 0; i < 3; i++){
            if (i == 0 || i == 2){
                total += scanner.nextInt() * 1; 
            }
            else{
                total += scanner.nextInt() * 3; 
            }
        }
        
        System.out.println("The 1-3-sum is " + total); 
        
        
        
        
        
        
        return; 
    }
}
