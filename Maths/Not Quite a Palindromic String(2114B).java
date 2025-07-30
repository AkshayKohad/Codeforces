import java.util.*;
import java.lang.*;


public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        
        while(t-- > 0){
            int n = sc.nextInt();
            int k = sc.nextInt();
            
            String s = sc.next();
            
            int cnt_1_pair = 0;
            int cnt_0_pair = 0;
            int cnt_no_match = 0;
            
            int i=0;
            int j=n-1;
            
            while(i<j){
                char ch_i = s.charAt(i);
                char ch_j = s.charAt(j);
                
                
                if((ch_i == ch_j) && (ch_i=='0')){
                    cnt_0_pair++;
                }else if((ch_i == ch_j) && (ch_j=='1')){
                    cnt_1_pair++;
                }else{
                    cnt_no_match++;
                }
                
                i++;
                j--;
            }
            
            if(cnt_1_pair + cnt_0_pair == k){
                System.out.println("YES");
            }else if(cnt_0_pair + cnt_1_pair < k){
                int diff = k-cnt_0_pair-cnt_1_pair;
                
                if(diff%2==1){
                    System.out.println("NO");
                }else{
                    if(diff<=cnt_no_match){
                        System.out.println("YES");
                    }else{
                        System.out.println("NO");
                    }
                }
            }else{
                int diff = cnt_0_pair+cnt_1_pair-k;
                
                if(diff%2==1){
                    System.out.println("NO");
                }else{
                    if(diff/2<=cnt_1_pair && diff/2<=cnt_0_pair){
                        System.out.println("YES");
                    }else{
                        System.out.println("NO");
                    }
                }
            }
            
            
        }
    }
}
