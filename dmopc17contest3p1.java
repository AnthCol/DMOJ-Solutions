import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        
        int total = scanner.nextInt(); 
        int lowest = 100000000; 
        int temp = 0; 
        for (int i = 0; i < total; i++){
            temp = scanner.nextInt(); 
            if (temp < lowest){
                lowest = temp; 
            }
        }
        
        System.out.println(lowest); 
        
        scanner.close(); 
        return; 
    }
}
