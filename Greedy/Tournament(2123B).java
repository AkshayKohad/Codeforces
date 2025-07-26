import java.util.*;
import java.lang.*;


public class Main{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        while(t-- > 0){
            int n = sc.nextInt();
            int player_ind = sc.nextInt();
            int remain_player = sc.nextInt();
            
            
            int[] players = new int[n];
            
            for(int i=0;i<n;i++){
                players[i] = sc.nextInt();
            }
            
            player_ind--;
            
            int small_cnt = 0;
            int large_cnt = 0;
            int player_strength = players[player_ind];
            
            for(int i=0;i<n;i++){
                if(player_ind == i)continue;
                
                if(player_strength >= players[i]) small_cnt++;
                else large_cnt++;
            }
            
            if(large_cnt==0 || remain_player>1){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }
}
