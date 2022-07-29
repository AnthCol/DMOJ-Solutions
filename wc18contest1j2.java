import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String cringe = scanner.next(); 
        String[] names = new String[5]; 
        for (int i = 0; i < 5; i++){
            names[i] = scanner.next(); 
            if (names[i].equals(cringe)){
                System.out.println("Y"); 
                return; 
            }
        }
        System.out.println("N"); 
    }
}
