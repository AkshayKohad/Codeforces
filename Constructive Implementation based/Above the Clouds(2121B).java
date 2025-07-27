import java.lang.*;
import java.util.*;



public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int t = sc.nextInt();
    
    while(t-- > 0){
        int n = sc.nextInt();
        
        String s = sc.next();
        
        //System.out.println(s);
        
        Map<Character,Integer>countMap = new HashMap<>();
        
        for(char c : s.toCharArray()){
            countMap.put(c,countMap.getOrDefault(c,0)+1);
        }
        
        int flag = 0;
        for(int i=1;i<n-1;i++){
            int value = countMap.get(s.charAt(i));
            
            if(value>1){
                flag=1;
                break;
            }
        }
        
        if(flag==1){
            System.out.println("Yes");
        }else{
            System.out.println("No");
        }
    }
    
  }
}
