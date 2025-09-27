import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in); // Create a Scanner object
        long n = scanner.nextLong(); 
        
        if(n>=0){
            System.out.println(n);
        }else{
            long pos_n = n*-1;
            
            long val = pos_n/10;
            long val2 = (pos_n/100)*10 + pos_n%10;
            
            long result = Math.max(-val,-val2);
            
            System.out.println(result);
        }
  }
}
