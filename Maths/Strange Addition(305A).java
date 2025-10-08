import java.util.*;

public class Main {
  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    int k = sc.nextInt();
    
    int is_hundred = 0;
    int is_divisible_by_ten = 0;
    int is_zero = 0;
    int is_less_than_ten = 0;
    int is_greater_than_ten_less_than_hundred = 0;
    
    int val_less_than_ten = -1;
    int val_greater_than_ten_less_than_hundred = -1;
    int val_is_divisible_by_10 = -1;
    
    for(int i=0;i<k;i++){
        int val = sc.nextInt();
        
        if(val == 100)is_hundred = 1;
        else if(val == 0)is_zero = 1;
        else if(val%10 == 0){
            is_divisible_by_ten = 1;
            val_is_divisible_by_10 = val;
        }
        else if(val > 0 && val < 10){
            is_less_than_ten = 1;
            val_less_than_ten = val;
        }
        else if(val > 10 && val < 100 && val%10 != 0){
            is_greater_than_ten_less_than_hundred = 1;
            val_greater_than_ten_less_than_hundred = val;
        }
    }
    
    int []result = new int[5];
    int cnt = 0;
    
    if(is_hundred == 1){
        result[cnt] = 100;
        cnt++;
    }
    
    if(is_zero == 1){
        result[cnt] = 0;
        cnt++;
    }
    
    if(is_divisible_by_ten == 1){
        result[cnt] = val_is_divisible_by_10;
        cnt++;
    }
    
    if(is_less_than_ten == 1){
        result[cnt] = val_less_than_ten;
        cnt++;
    }
    
    if(is_less_than_ten == 0 && is_divisible_by_ten == 0 && is_greater_than_ten_less_than_hundred == 1){
        result[cnt] = val_greater_than_ten_less_than_hundred;
        cnt++;
    }
    
    System.out.println(cnt);
    
    for(int i=0;i<cnt;i++){
        System.out.print(result[i] + " ");
    }
    
  }
}
