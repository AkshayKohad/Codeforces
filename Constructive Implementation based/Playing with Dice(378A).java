import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int a,b;
    a = sc.nextInt();
    b = sc.nextInt();
    
    int player1_win = 0;
    int draw = 0;
    int player2_win = 0;
    
    for(int i=1;i<=6;i++){
        int diff_player1 = Math.abs(i-a);
        int diff_player2 = Math.abs(i-b);
        
        if(diff_player2>diff_player1)player1_win++;
        else if(diff_player2<diff_player1)player2_win++;
        else draw++;
    }
    
    System.out.println(player1_win + " " + draw + " " + player2_win);
    
  }
}
