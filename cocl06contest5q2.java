import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        String original = scanner.next(); 
        String wanted = scanner.next(); 
        scanner.close(); 
        
        // convert it all into seconds. 
        int originalTime = 0; 
        int wantedTime = 0; 
        originalTime += Integer.parseInt(original.substring(0, 2)) * 3600;
        originalTime += Integer.parseInt(original.substring(3, 5)) * 60; 
        originalTime += Integer.parseInt(original.substring(6, 8)); 
        wantedTime += Integer.parseInt(wanted.substring(0, 2)) * 3600;
        wantedTime += Integer.parseInt(wanted.substring(3, 5)) * 60; 
        wantedTime += Integer.parseInt(wanted.substring(6, 8)); 
        
        if (originalTime == wantedTime){
            System.out.println("24:00:00"); 
            return; 
        }
        
        int finalTime = 0; 
        
        if (originalTime > wantedTime){
            finalTime = 86400 - originalTime; 
            finalTime += wantedTime; 
        }
        else finalTime = wantedTime - originalTime; 
        
        String answer = ""; 
        
        if (finalTime/3600 == 0) answer += "00"; 
        else if (finalTime/3600 < 12){
            answer += "0";
            answer += String.valueOf(finalTime/3600); 
        }
        else answer += String.valueOf(finalTime/3600);
        
        finalTime %= 3600; 
        answer += ":"; 
        
        if (finalTime/60 == 0) answer += "00"; 
        else if (finalTime/60 < 12){
            answer += "0";
            answer += String.valueOf(finalTime/60); 
        }
        else answer += String.valueOf(finalTime/60);
        finalTime %= 60; 
        
        answer += ":"; 
        
        if (finalTime == 0) answer += "00"; 
        else if (finalTime < 12){
            answer += "0";
            answer += String.valueOf(finalTime); 
        }
        else answer += String.valueOf(finalTime);
        
        
        System.out.println(answer); 
        
        return; 
    }
}
