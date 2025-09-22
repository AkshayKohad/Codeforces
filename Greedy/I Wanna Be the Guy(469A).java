import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    int size = sc.nextInt();
    
    int []a = new int[size];
    
    for(int i=0;i<size;i++){
        a[i] = -1;
    }
    
    int p = sc.nextInt();
    for(int i=0;i<p;i++){
        int val = sc.nextInt();
        a[val-1]=1;
    }
    int q = sc.nextInt();
    for(int i=0;i<q;i++){
        int val = sc.nextInt();
        a[val-1]=1;
    }
    
    int flag = 1;
    
    for(int i=0;i<size;i++){
        if(a[i]==-1){
            flag=0;
            break;
        }
    }
    
    if(flag==1){
        System.out.println("I become the guy.");
    }else{
        System.out.println("Oh, my keyboard!");
    }
    
  }
}
