import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  
    int t;
    t = sc.nextInt();
    
    while(t-- > 0){
        int n,x;
        n = sc.nextInt();
        x = sc.nextInt();
        
        ArrayList<Integer>a = new ArrayList<>();
        
        for(int i=0;i<n;i++){
            int val = sc.nextInt();
            
            a.add(val);
        }
        
        int max_diff = 0;
        int initial_val = 0;
        for(int i=0;i<n;i++){
            int val = a.get(i);
            
            max_diff = Math.max(max_diff,val-initial_val);
            initial_val = val;
        }
        
        max_diff = Math.max(max_diff,(x-initial_val)*2);
        
        System.out.println(max_diff);
    }
  }
}
