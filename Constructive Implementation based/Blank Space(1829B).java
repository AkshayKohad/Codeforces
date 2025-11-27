import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        while(t-- > 0){
            int n = sc.nextInt();
            ArrayList<Integer>a = new ArrayList<>();
            
            for(int i=0;i<n;i++){
                int val = sc.nextInt();
                a.add(val);
            }
            
            int i=0;
            int result = 0;
            
            while(i<n){
                if(a.get(i) == 1){
                    i++;
                    continue;
                }
                int j = i;
                int cnt = 0;
                
                while(j<n && a.get(j)==0){
                    cnt++;
                    j++;
                }
                
                result = Math.max(result,cnt);
                i=j;
            }
            
            System.out.println(result);
        }
    }
}
