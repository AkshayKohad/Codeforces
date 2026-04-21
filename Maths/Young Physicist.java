import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        
        int res_x = 0;
        int res_y = 0;
        int res_z = 0;
        
        for(int i=0;i<n;i++){
            int cur_x = sc.nextInt();
            int cur_y = sc.nextInt();
            int cur_z = sc.nextInt();
            
            res_x += cur_x;
            res_y += cur_y;
            res_z += cur_z;
        }
        
        if(res_x == 0 && res_y == 0 && res_z == 0){
            System.out.println("YES");
        }else{
            System.out.println("NO");
        }
    }
}
