import java.util.*;

public class Main {
  public static void main(String[] args) {
    int y,k,n;
    
    Scanner sc = new Scanner(System.in);
    
    y = sc.nextInt();
    k = sc.nextInt();
    n = sc.nextInt();
    
    if(n-y<=0){
        System.out.println(-1);
        return;
    }
    
    int x_limit = n-y;
    
    int divi = y/k + 1;
    
    int start = k*divi;
    int cnt_values = 0;
    while(start-y <= x_limit){
        System.out.print(start-y + " ");
        cnt_values++;
        start += k;
    }
    
    if(cnt_values==0){
        System.out.println(-1);
    }
  }
}
