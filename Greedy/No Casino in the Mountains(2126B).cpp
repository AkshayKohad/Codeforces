import java.util.*;
import java.lang.*;


public class Main {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
    
        while(t-- > 0){
            int n = sc.nextInt();
            

            int[] a = new int[n];

            int k = sc.nextInt();

            for(int i=0;i<n;i++){
                a[i] = sc.nextInt();
            } 
            
            
            int res = 0;
            int i=0;
           

            while(i<n){
                
                int j=i;
                if(a[j]==1){
                    j++;
                    i=j;
                    continue;
                }
                

                int cnt = 0;
                int flag=0;
                for(;j<Math.min(n,i+k);j++){
                    if(a[j]==1){
                        i=j+1;
                        flag=1;
                        break;
                    }
                    cnt++;
                }
                

                if(cnt==k){
                    j++;
                    i=j;
                    res++;
                }
                else if(flag == 0){
                    break;
                }
                
                

            }

            System.out.println(res);
        }
    }
}
