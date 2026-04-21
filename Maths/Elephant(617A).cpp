import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  
    int num = sc.nextInt();
    
    int result = num/5 + (num%5 > 0 ? 1 : 0);
    
    System.out.println(result);
  }
}
