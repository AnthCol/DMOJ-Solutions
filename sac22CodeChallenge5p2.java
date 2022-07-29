import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int extensions = scanner.nextInt(); 
        String sway = scanner.next(); 
        
        if (extensions%2 == 0){
            if (sway.equals("left")){
                System.out.println("right"); 
            }
            else{
                System.out.println("left"); 
            }
        }
        else{
            System.out.println(sway); 
        }
            
        scanner.close(); 
        
        return; 
    }
}
