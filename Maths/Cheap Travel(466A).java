import java.util.*;

public class Main {
  public static void main(String[] args) {
    int n,m,a,b;
    
    Scanner sc = new Scanner(System.in);
    
    n = sc.nextInt();
    m = sc.nextInt();
    a = sc.nextInt();
    b = sc.nextInt();
    
    if(b<=a){
        int total_ticket = n/m + (n%m > 0 ? 1 : 0);
        System.out.println(total_ticket*b);
    }else{
        int cost_per_ticket = b/m + (b%m > 0 ? 1 :0);
       
        if(cost_per_ticket <= a){
            int total_grp_ticket = n/m;
            int total_cost = total_grp_ticket*b;
            
            int remaining_ticket = n%m;
            
            if(a*remaining_ticket >= b){
                total_cost += b;
            }else{
                total_cost += a*remaining_ticket;
            }
            
            System.out.println(total_cost);
        }else{
            System.out.println(n*a);
        }
    }
    
    
    
  }
}
