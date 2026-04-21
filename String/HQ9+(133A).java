import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    String word = sc.nextLine();
    int n = word.length();
    int isPrinted = 0;
    
    if(word.length()>0){
        char[] chars = word.toCharArray();
        
        for(int i=0;i<n;i++){
            if(chars[i]=='H' || chars[i]=='Q' || chars[i]=='9'){
                isPrinted = 1;
                break;
            }
        }
    }
    
    if(isPrinted == 1){
        System.out.println("YES");
    }else{
        System.out.println("NO");
    }
    
  }
}
