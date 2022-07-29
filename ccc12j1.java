import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int limit = 0; 
        int speed = 0; 
        int diff = 0; 
        limit = scanner.nextInt(); 
        speed = scanner.nextInt(); 
        diff = speed - limit; 
        
        if (diff <= 0) System.out.println("Congratulations, you are within the speed limit!"); 
        else if (diff <= 20 && diff >= 1) System.out.println("You are speeding and your fine is $100."); 
        else if (diff > 20 && diff < 31) System.out.println("You are speeding and your fine is $270."); 
        else System.out.println("You are speeding and your fine is $500."); 
        
        
        return; 
    }
}
