import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        ArrayList<Integer> list = new ArrayList<Integer>(); 
        ListIterator<Integer> iterate = list.listIterator(); 
        int maxX = scanner.nextInt(); 
        int maxY = scanner.nextInt(); 
        scanner.nextLine(); 
        
        int coordX = 0; 
        int coordY = 0; 
        int temp1 = 1; 
        int temp2 = 1; 
        int count = 0; 
        while (count < 1000000){
            temp1 = scanner.nextInt(); 
            temp2 = scanner.nextInt(); 
            if (temp1 == 0 && temp2 == 0) break; 
            scanner.nextLine(); 
            list.add(temp1); 
            list.add(temp2); 
            count++; 
        }
        int i = 0; 
        int check = 0; 
        while (check != count){
            temp1 = list.get(i); 
            i++; 
            temp2 = list.get(i); 
            i++; 
            if (temp1 == 0 && temp2 == 0) break;  
            coordX += temp1; 
            coordY += temp2; 
            
            if (coordX < 0) coordX = 0; 
            if (coordX > maxX) coordX = maxX; 
            if (coordY < 0) coordY = 0; 
            if (coordY > maxY) coordY = maxY; 
        
            System.out.println(coordX + " " + coordY); 
            check++; 
        }
        
        return;
    }
}
