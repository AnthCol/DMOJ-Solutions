import java.io.*;
import java.util.*;
public class HelloWorld {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in); 
        int countS = 0; 
        int countT = 0; 
        int count = scanner.nextInt(); 
        String[] strings = new String[count]; 
        scanner.nextLine(); 
        for (int i = 0; i < count; i++){
            strings[i] = scanner.nextLine(); 
        }
        for (int i = 0; i < count; i++){
            for (int x = 0; x < strings[i].length(); x++){
                if (strings[i].charAt(x) == 'S' || strings[i].charAt(x) == 's') countS++; 
                if (strings[i].charAt(x) == 'T' || strings[i].charAt(x) == 't') countT++; 
            }
        }
        
        if (countS >= countT) System.out.println("French"); 
        else System.out.println("English"); 
        

        return; 
    }
}
