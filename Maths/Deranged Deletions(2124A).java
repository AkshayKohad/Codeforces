import java.lang.*;
import java.util.*;
import java.util.Arrays;


public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int t = sc.nextInt();
    
    while(t-- > 0){
        int n = sc.nextInt();
        
        int[] a = new int[n];
        
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }
        
        if(n==1){
            System.out.println("NO");
            continue;
        }
        
        int first = -1;
        int second = -1;
        
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                first = a[i];
                second = a[i+1];
                break;
            }
            
        }
       
       if(first==-1){
           System.out.println("NO");
       }else{
           System.out.println("YES");
           System.out.println("2");
           System.out.println(first + " " + second);
       }
       
    }
  }
}
