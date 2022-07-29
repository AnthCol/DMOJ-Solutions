import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        
        int temp = scanner.nextInt(); 
        int snow = scanner.nextInt(); 
        int risk = scanner.nextInt(); 
        
        scanner.close(); 
        
        int check = 0; 
        if (temp < -40) check++; 
        if (snow >= 15) check++; 
        if (risk > 50) check++; 
        
        if (check > 1){
            System.out.println("YES"); 
        }
        else{
            System.out.println("NO"); 
        }
        
        return;
    }
}
