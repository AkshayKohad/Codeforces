import java.util.*;

public class Main {
  public static void main(String[] args) {
    int n;
    Scanner sc = new Scanner(System.in);
    
    n = sc.nextInt();
    
    int []a = new int[n];
    
    for(int i=0;i<n;i++){
        a[i] = sc.nextInt();
    }
    
    
    int cnt_programming = 0;
    int cnt_maths = 0;
    int cnt_sports = 0;
    
    for(int i=0;i<n;i++){
        if(a[i] == 1){
            cnt_programming++;
        }else if(a[i]==2){
            cnt_maths++;
        }else{
            cnt_sports++;
        }
    }
    
    int total_teams = Math.min(cnt_programming,cnt_sports);
    total_teams = Math.min(total_teams,cnt_maths);
    
    int []programmers = new int[cnt_programming];
    int []mathematicians = new int[cnt_maths];
    int []sportsman = new int[cnt_sports];
    
    int prog_cnt = 0;
    int math_cnt = 0;
    int sport_cnt = 0;
    
    for(int i=0;i<n;i++){
        if(a[i] == 1){
            programmers[prog_cnt] = i+1;
            prog_cnt++;
        }else if(a[i]==2){
            mathematicians[math_cnt] = i+1;
            math_cnt++;
        }else{
            sportsman[sport_cnt] = i+1;
            sport_cnt++;
        }
    }
    
    System.out.println(total_teams);
    
    int teams = 0;
    while(teams < total_teams){
        System.out.println(programmers[teams] + " " + mathematicians[teams] + " " + sportsman[teams]);
        teams++;
    }
    
  }
}
