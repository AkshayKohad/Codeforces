import java.util.*;

class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    int x = sc.nextInt();
    
    int []start_time = new int[n];
    int []end_time = new int[n];
    
    for(int i=0;i<n;i++){
        int start = sc.nextInt();
        int end = sc.nextInt();
        
        start_time[i] = start;
        end_time[i] = end;
    }
    
    int cur_time = 1;
    
    int total_time = 0;
    
    for(int i=0;i<n;i++){
        int time_diff = start_time[i]-cur_time;
        
        total_time += time_diff%x;
        total_time += end_time[i]-start_time[i]+1;
        
        cur_time = end_time[i]+1;
    }
    
    System.out.println(total_time);
  }
}
