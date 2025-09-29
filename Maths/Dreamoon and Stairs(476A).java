import java.util.*;

class Main {
  public static void main(String[] args) {
    int n,m;
    Scanner sc = new Scanner(System.in);
    
    n = sc.nextInt();
    m = sc.nextInt();
    
    if(n<m){
     System.out.println(-1);
     return;
    }
    else if(n==m){
        System.out.println(n);
    }
    else{
        int min_moves = n/2 + n%2;
        
        int res = min_moves/m + (min_moves%m >0 ? 1:0);
        
        System.out.println(res*m);
    }
  }
}
