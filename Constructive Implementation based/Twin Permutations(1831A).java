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
            
            ArrayList<Integer>b = new ArrayList<>();
            
            for(int i=0;i<n;i++){
                int cur_b = n - a.get(i) +1;
                b.add(cur_b);
                System.out.print(cur_b + " ");
            }
            
            System.out.println();
        }
    }
}
