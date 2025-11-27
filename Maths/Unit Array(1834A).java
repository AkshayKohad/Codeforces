import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        while(t-- > 0){
            int n = sc.nextInt();
            int pos = 0;
            int neg = 0;
            ArrayList<Integer>a = new ArrayList<>();
            for(int i=0;i<n;i++){
                int val = sc.nextInt();
                a.add(val);
                
                if(val == 1)pos++;
                else neg++;
            }
            
            if(pos>=neg){
                if(neg%2==0)
                    System.out.println("0");
                else
                    System.out.println("1");
            }else{
                int diff = neg-pos;
                diff = diff/2 + diff%2;
                neg = neg-diff;
                if(neg%2==0)
                    System.out.println(diff);
                else
                    System.out.println(diff+1);
            }
        }
        
    }
}
