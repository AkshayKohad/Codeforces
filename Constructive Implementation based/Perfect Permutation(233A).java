import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    
    
    if(n%2==1){
        System.out.println("-1");
    }else{
        int cur_val = 1;
        int next_val = 2;
        
        while(next_val <= n){
            System.out.print(next_val + " " + cur_val + " ");
            cur_val += 2;
            next_val += 2;
        }
    }
    
  }
}
