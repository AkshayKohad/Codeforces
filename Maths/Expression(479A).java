import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int a = sc.nextInt();
    int b = sc.nextInt();
    int c = sc.nextInt();
    
    int res = a+b+c;
    
    res = Math.max(res,(a+b)*c);
    res = Math.max(res,a*(b+c));
    res = Math.max(res,a*b*c);
    
    System.out.println(res);
  }
}
