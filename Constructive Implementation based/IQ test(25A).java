import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    int n;
    n = sc.nextInt();
    
    int []a = new int[n];
    
    for(int i=0;i<n;i++){
        a[i] = sc.nextInt();
    }
    
    int odd_cnt = 0;
    int even_cnt = 0;
    
    for(int i=0;i<n;i++){
        if(a[i]%2==1)odd_cnt++;
        else even_cnt++;
    }
    
    if(odd_cnt==1){
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                System.out.println(i+1);
                break;
            }
        }
    }else{
         for(int i=0;i<n;i++){
            if(a[i]%2==0){
                System.out.println(i+1);
                break;
            }
        }
    }
    
  }
}
