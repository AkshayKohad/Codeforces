import java.util.*;

class Main {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
       int t = sc.nextInt();
       
       while(t-- > 0){
           int n = sc.nextInt();
           int k = sc.nextInt();
           int x = sc.nextInt();
           
           if(x == 1 && k==1){
               System.out.println("NO");
               continue;
           }
           
           if(x == 1){
               if(k==2){
                   if(n%2 == 1){
                       System.out.println("NO");
                   }else{
                       int val = n/2;
                       System.out.println("YES");
                       System.out.println(val);
                       while(val-- > 0){
                           System.out.print("2 ");
                       }
                   }
               }else{
                   if(n%2 == 1){
                       if(n<3)System.out.println("NO");
                       else{
                           int val = (n-3)/2;
                           System.out.println("YES");
                           System.out.println(val+1);
                           System.out.print("3 ");
                           while(val-- > 0){
                           System.out.print("2 ");
                            }
                        }
                   }else{
                       int val = n/2;
                       System.out.println("YES");
                       System.out.println(val);
                       while(val-- > 0){
                           System.out.print("2 ");
                       }
                   }
                   
               }
           }else{
               int val = n;
               System.out.println("YES");
               System.out.println(val);
                while(val-- > 0){
                    System.out.print("1 ");
                }
           }
           
           System.out.println();
       }
               
    }
}
