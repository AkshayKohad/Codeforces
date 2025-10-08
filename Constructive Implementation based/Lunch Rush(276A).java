import java.util.*;


public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    long n,k;
    n = sc.nextLong();
    k = sc.nextLong();
    
    long []time_limit = new long[(int)n];
    long []joy = new long[(int)n];
    
    for(int i=0;i<n;i++){
        long cur_joy = sc.nextLong();
        long cur_time_limit = sc.nextLong();
        time_limit[i] = cur_time_limit;
        joy[i] = cur_joy;
    }
    
    long max_joy = Long.MIN_VALUE;
    
    for(int i=0;i<n;i++){
        if(k>=time_limit[i]){
            max_joy = Math.max(max_joy,joy[i]);
        }else{
            max_joy = Math.max(max_joy,joy[i]-(time_limit[i]-k));
        }
    }
    
    System.out.println(max_joy);
    
  }
}
