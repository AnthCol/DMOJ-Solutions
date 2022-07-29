import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        String temp = ""; 
        int count = 0; 
        while (!temp.equals("True") && !temp.equals("False")){
            temp = scanner.next(); 
            if (temp.equals("not")) count++; 
        }
        
        if (count%2 == 0) System.out.println(temp); 
        else{
            if (temp.equals("True")) System.out.println("False"); 
            else System.out.println("True"); 
        }
        
        
        
        
        return; 
    }
}
