import java.util.*;
public class Main {
  public static void main(String[] args) {
    int a,b,r;
    Scanner sc = new Scanner(System.in);
    
    a = sc.nextInt();
    b = sc.nextInt();
    r = sc.nextInt();
    
    if(a < 2*r || b < 2*r)System.out.println("Second");
    else System.out.println("First");
  }
}
