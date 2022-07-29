import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int obstacles = scanner.nextInt(); 
        int aJump = scanner.nextInt(); 
        int tJump = scanner.nextInt(); 
        int obA = 0; 
        int obT = 0; 
        int countA = 0; 
        int countT = 0; 
        for (int i = 0; i < obstacles; i++){
            
            obA = scanner.nextInt(); 
            obT = scanner.nextInt(); 
            
            if (obA >= aJump) countA += 2;
            else countA++; 
            
            if (obT >= tJump) countT += 2; 
            else countT++; 
        }
        scanner.close(); 
        
        
        
        
        if (countA < countT){
            System.out.println("Andrew wins!"); 
        }
        else if (countT < countA){
            System.out.println("Tommy wins!"); 
        }
        else{
            System.out.println("Tie!"); 
        }
        
        
        
        return; 
    }
}
