import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        
        int countLower = 0;  
        int countUpper = 0; 
        int countDigit = 0; 
        String s = ""; 
        s+=scanner.nextLine(); 
        scanner.close(); 
        int length = s.length(); 
        
    
        if (length < 8 || length > 12){
            System.out.println("Invalid"); 
            return; 
        }
    
        for (int i = 0; i < length; i++){
            if (Character.isLowerCase(s.charAt(i))){
                countLower++; 
            }
            else if (Character.isUpperCase(s.charAt(i))){
                countUpper++; 
            }
            else if (Character.isDigit(s.charAt(i))){
                countDigit++; 
            }
            else{
                System.out.println("Invalid"); 
                return; 
            }
            if (countDigit >= 1 && countUpper >= 2 && countLower >= 3){
                System.out.println("Valid"); 
                return; 
            }
        
        }
        if (countDigit >= 1 && countUpper >= 2 && countLower >= 3){
            System.out.println("Valid"); 
            return; 
        }
        else{
            System.out.println("Invalid"); 
            return; 
        }
    }
}
