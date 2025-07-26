import java.util.*;
import java.lang.*;


public class Main {
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    
    int t = sc.nextInt();
    
    while(t-- > 0){
        
        int n = sc.nextInt();
        
        int result = n;
        
        while(n>0){
            int rem = n%10;
            n/=10;
            
            result = Math.min(result,rem);
        }
        
        System.out.println(result);
    }
    
  }
}
