import java.util.*;

class Main {
  public static void main(String[] args) {
    long l,r;
    Scanner sc = new Scanner(System.in);
    l = sc.nextLong();
    r = sc.nextLong();
    
    if(r-l+1<=2){
        System.out.println(-1);
        return;
    }
    
    if(l%2==0){
        System.out.println(l+" "+(l+1)+" "+(l+2));
    }else{
        if(r-l+1==3){
            System.out.println(-1);
        }else{
            System.out.println((l+1)+" "+(l+2)+" "+(l+3));
        }
    }
  }
}
