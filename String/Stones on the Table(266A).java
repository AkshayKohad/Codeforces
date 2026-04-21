import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    sc.nextLine();
    String pattern = sc.nextLine();
    
    char[] chars_pattern = pattern.toCharArray();
    int result = 0;
    int i = 0;
    while(i<n){
        int j=i;
        int cnt = 0;
        while(j<n && chars_pattern[i]==chars_pattern[j]){
            j++;
            cnt++;
        }
        
        i=j;
        result += cnt-1;
        
    }
    
    System.out.println(result);
    
  }
}
