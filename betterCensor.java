import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in); 
    
        int inputs = scanner.nextInt(); 
        scanner.nextLine(); 
        String data = ""; 
        for (int i = 0; i < inputs; i++){
            data += scanner.nextLine(); 
            data += "\n";
        }
        String temp = ""; 
        
        char[] dataArray = data.toCharArray(); 
        
        for (int i = 0; i < data.length() - 6; i++){
            temp = data.substring(i, i + 6); 
            if (Character.isLetterOrDigit(temp.charAt(1)) && Character.isLetterOrDigit(temp.charAt(2)) 
                && Character.isLetterOrDigit(temp.charAt(3)) && Character.isLetterOrDigit(temp.charAt(4))){
                if (!Character.isLetterOrDigit(temp.charAt(0)) && !Character.isLetterOrDigit(temp.charAt(5))){
                    dataArray[i+1] = '*'; 
                    dataArray[i+2] = '*'; 
                    dataArray[i+3] = '*'; 
                    dataArray[i+4]= '*'; 
                }
            }
        }
        
        System.out.println(String.valueOf(dataArray)); 
        return; 
    }
}
