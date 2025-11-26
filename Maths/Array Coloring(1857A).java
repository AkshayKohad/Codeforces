
import java.util.*;

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        
        while(t-- > 0){
            int n = sc.nextInt();
            
            ArrayList<Integer>a = new ArrayList<>();
            int odd = 0;
            int even = 0;
            for(int i=0;i<n;i++){
                int val = sc.nextInt();
                a.add(val);
                
                if(val%2 == 1){
                    odd++;
                }else{
                    even++;
                }
            }
            
            if(odd%2 == 1){
                System.out.println("NO");
            }else{
                System.out.println("YES");
            }
        }
    }
}
