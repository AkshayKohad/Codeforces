import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    int n,k;
    
    Scanner sc = new Scanner(System.in);
    n = sc.nextInt();
    k = sc.nextInt();
    
    int []a = new int[n];
    
    int cnt_members = 0;
    
    for(int i=0;i<n;i++){
        a[i] = sc.nextInt();
        a[i] = 5-a[i];
        
        cnt_members += a[i]>=k ? 1:0;
        
    }
    
    System.out.println(cnt_members/3);
    
    
  }
}
