import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int total = scanner.nextInt(); 
        int median = 0; 
        String[] names = new String[total]; 
        int[] values = new int[total]; 
        int[] temp = new int[total]; 
        for (int i = 0; i < total; i++){
            names[i] = scanner.next(); 
            values[i] = scanner.nextInt(); 
            temp[i] = values[i]; 
            scanner.nextLine(); 
        }
        Arrays.sort(temp); 
        median = (temp[total/2]); 

        for (int i = 0; i < total; i++){
            if (values[i] > median){
                System.out.println(names[i] + " is cute! <3"); 
            }
            else{
                System.out.println(names[i] + " is not cute. </3"); 
            }
        }
        
        return; 
    }
}
