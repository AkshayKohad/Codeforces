import java.util.*;

public class Main {
    static boolean check_sorted(ArrayList<Integer>a){
        int sz = a.size();
        
        for(int i=0;i<sz-1;i++){
            if(a.get(i)>a.get(i+1))return false;
        }
        
        return true;
    }
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
           
           if(check_sorted(a) == false){
               System.out.println("0");
               continue;
           }
           
           int result = Integer.MAX_VALUE;
           
           for(int i=0;i<n-1;i++){
               int second_val = a.get(i+1);
               int first_val = a.get(i);
               int diff  = second_val - first_val;
               
               result = Math.min(result,diff/2 + 1);
           }
           System.out.println(result);
       }
    }
}
