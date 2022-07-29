import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        String bozo = scanner.nextLine(); 
        int count = 0;
        for (int i = 0; i < bozo.length(); i++){
            if (bozo.charAt(i) == ' ') count++; 
        }
        if (count > 0) count++; 
        if (count == 0 && bozo.length() > 0) count++; 
        
        System.out.println(count); 
    }
}
