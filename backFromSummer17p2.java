import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in); 
        int total = scanner.nextInt(); 
        int orange = 0; 
        int blue = 0; 
        int red = 0; 
        int green = 0; 
        int yellow = 0;
        int black = 0; 
        String temp = ""; 
        int count = 0; 
        int max = 0; 
        
        for (int i = 0; i < total; i++){
            temp = scanner.next(); 
            if (temp.equals("orange")){
                orange++; 
                if (orange > max) max = orange;
            }
            if (temp.equals("red")){
                red++; 
                if (red > max) max = red; 
            }
            if (temp.equals("yellow")){
                yellow++; 
                if (yellow > max) max = yellow; 
            }
            if (temp.equals("green")){
                green++; 
                if (green > max) max = green; 
            }
            if (temp.equals("blue")){
                blue++; 
                if (blue > max) max = blue; 
            }
            if (temp.equals("black")){
                black++; 
                if (black > max) max = black; 
            }
        }
        int temp2 = total - max; 
        
        System.out.println(Math.min(max, temp2 + 1) + temp2); 
        
        
        return; 
    }
}
