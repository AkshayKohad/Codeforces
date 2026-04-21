import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    String word = sc.nextLine();
    
    if(word.length()>0){
        
        char[] chars = word.toCharArray();
        
        if(chars[0]>=97 && chars[0]<=122){
            chars[0] = (char) (chars[0]-32);
        }
        
        word = new String(chars);
    }
    
    
    System.out.println(word);
  }
}
