import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        String tempString = ""; 
        Scanner scanner = new Scanner(System.in); 
        int numbers = scanner.nextInt(); 
        numbers++; 
     
        String[] answers = new String[numbers]; 
        for (int i = 0; i < numbers; i++){
            answers[i] = ""; 
        }
        int count = 0; 
        for (int i = 0; i < numbers; i++){
            tempString = scanner.nextLine(); 
           
            for (int x = 0; x < tempString.length(); x++){
                
                if (Character.isLetterOrDigit(tempString.charAt(x))){
                    count++; 
                    if (count == 11){
                        break; 
                    }
                    if (count == 4 || count == 7){
                        answers[i] += '-'; 
                    
                    }
                    
                    if (tempString.charAt(x) == 'A' || tempString.charAt(x) == 'B' || tempString.charAt(x) == 'C'){
                        answers[i] += '2'; 
                    }
                    else if (tempString.charAt(x) == 'D' || tempString.charAt(x) == 'E' || tempString.charAt(x) == 'F'){
                        answers[i] += '3'; 
                    }
                    else if(tempString.charAt(x) == 'G' || tempString.charAt(x) == 'H' || tempString.charAt(x) == 'I'){
                        answers[i] += '4'; 
                    }
                    else if (tempString.charAt(x) == 'J' || tempString.charAt(x) == 'K' || tempString.charAt(x) == 'L'){
                        answers[i] += '5'; 
                    }
                    else if (tempString.charAt(x) == 'M' || tempString.charAt(x) == 'N' || tempString.charAt(x) == 'O'){
                        answers[i] += '6'; 
                    }
                    else if(tempString.charAt(x) == 'P' || tempString.charAt(x) == 'Q' || tempString.charAt(x) == 'R' || tempString.charAt(x) == 'S'){
                        answers[i] += '7'; 
                    }
                    else if(tempString.charAt(x) == 'T' || tempString.charAt(x) == 'U' || tempString.charAt(x) == 'V'){
                        answers[i] += '8'; 
                    }
                    else if (tempString.charAt(x) == 'W' || tempString.charAt(x) == 'X' || tempString.charAt(x) == 'Y' || tempString.charAt(x) == 'Z'){
                        answers[i] += '9'; 
                    }
                    else{
                        answers[i] += tempString.charAt(x); 
                    }
                }
            }
            count = 0; 
        }
        
        
        for (int i = 0; i < numbers; i++){
            System.out.println(answers[i]); 
        }
        
        

        return; 
    }
}
