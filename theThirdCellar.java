import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int[] checkPrime = new int[1000000];
        Arrays.fill(checkPrime, 1); 
        checkPrime[0] = 0; 
        checkPrime[1] = 1; 
        int inputs = scanner.nextInt(); 
        int left = 0; 
        int right = 0; 
        int count = 0; 
        for (int i = 0; i < inputs; i++){
            left = scanner.nextInt();
            if (left == 1) left++; 
            right = scanner.nextInt(); 
            for (int x = 2; x*x < right; x++){
                if (checkPrime[x] == 1){
                    for (int j = x*x; j < right; j += x){
                        checkPrime[j] = 0; 
                    }
                }
            }
            
            for (int m = left; m < right; m++){
                if (checkPrime[m] == 1) count++; 
            }
            
            System.out.println(count); 
            count = 0; 
            
            
        }
        scanner.close(); 
        return; 
        
    }
}
