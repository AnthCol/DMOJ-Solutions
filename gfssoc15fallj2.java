import java.io.*;
import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int total = scanner.nextInt(); 
        scanner.close(); 
        int asTwo = 1; 
        String temp = ""; 
        for (int i = 1; i <= total; i++){
            if (i%7 == 0 && i%13 == 0) temp += "Fizz Fuzz"; 
            else if (i%7 == 0) temp += "Fizz";
            else if (i%13 == 0) temp += "Fuzz"; 
            else temp += i; 
            temp += " "; 
            if (asTwo%7 == 0 && asTwo%13 == 0) temp += "Fizz Fuzz"; 
            else if (asTwo%7 == 0) temp += "Fizz";
            else if (asTwo%13 == 0) temp += "Fuzz"; 
            else temp += asTwo; 
            System.out.printf("%s\n", temp); 
            asTwo += 2; 
            temp = ""; 
            
        }
        
        return; 
    }
}
