import java.util.*;


class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    
    int chest_exercise = 0;
    int biceps_exercise = 0;
    int back_exercise = 0;
    
    int i=0;
    while(i<n){
        int val = sc.nextInt();
        chest_exercise += val;
        i++;
        
        if(i>=n)break;
        
        val = sc.nextInt();
        biceps_exercise += val;
        i++;
        
        if(i>=n)break;
        
        val = sc.nextInt();
        back_exercise += val;
        i++;
    }
    
    if(chest_exercise>=biceps_exercise && chest_exercise>=back_exercise){
        System.out.println("chest");
    }else if(biceps_exercise>=chest_exercise && biceps_exercise>=back_exercise){
        System.out.println("biceps");
    }else{
        System.out.println("back");
    }
  }
}
