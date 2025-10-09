import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  
    int n,m;
    
    n = sc.nextInt();
    m = sc.nextInt();
    
    int []correct = new int[n];
    int []incorrect = new int[m];
    
    for(int i=0;i<n;i++){
        correct[i] = sc.nextInt();
    }
    for(int i=0;i<m;i++){
        incorrect[i] = sc.nextInt();
    }
    
    int mini_time_correct = correct[0];
    int maxi_time_correct = correct[0];
    for(int i=0;i<n;i++){
        mini_time_correct = Math.min(mini_time_correct,correct[i]);
        maxi_time_correct = Math.max(maxi_time_correct,correct[i]);
    }
    
    int mini_time_incorrect = incorrect[0];
    for(int i=0;i<m;i++){
        mini_time_incorrect = Math.min(incorrect[i],mini_time_incorrect);
    }
    
    int v = Math.max(2*mini_time_correct,maxi_time_correct);
    
    if(v<mini_time_incorrect){
        System.out.println(v);
    }else{
        System.out.println(-1);
    }
    
  }
}
