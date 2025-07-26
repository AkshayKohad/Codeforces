import java.util.*;
import java.lang.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int t = sc.nextInt();
    
    while(t-- > 0){
        int n = sc.nextInt();
        
        if(n%4==0)System.out.println("BOB");
        else System.out.println("ALICE");
    }
  }
}
