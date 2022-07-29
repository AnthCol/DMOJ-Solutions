import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int width = scanner.nextInt(); 
        int length = scanner.nextInt(); 
        int side = scanner.nextInt(); 
        
        width /= side;
        length /= side; 
        
        System.out.println(width * length); 
 
        
        return; 
    }
}
