import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    
    int maximum_a = n/a;
    int maximum_b = n/b;
    
    int res_pieces = 0;
    
    for(int i=0;i<=maximum_a;i++){
        for(int j=0;j<=maximum_b;j++){
            
            int cur_len = i*a + j*b;
            if(cur_len>n)continue;
            
            int res_diff = n-cur_len;
            if(res_diff%c==0){
                int cur_pieces = i+j+res_diff/c;
                
                res_pieces = Math.max(res_pieces,cur_pieces);
            }
        }
    }
    
    System.out.println(res_pieces);
  }
}
