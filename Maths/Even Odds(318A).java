import java.util.*;

public class Main {
  public static void main(String[] args) {
    long n,k;
    Scanner sc = new Scanner(System.in);
    n = sc.nextLong();
    k = sc.nextLong();
    
    long cnt_odd = n/2 + n%2;
    long cnt_even = n/2;
    
    if(cnt_odd>=k){
        long result = 1 + (k-1)*2;
        System.out.println(result);
    }else{
        k = k - cnt_odd;
        long result = 2 + (k-1)*2;
        System.out.println(result);
    }
  }
}
