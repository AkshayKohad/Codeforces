import java.util.*;

class Main {
  public static void main(String[] args) {
    
    int x1,y1,x2,y2;
    
    Scanner sc = new Scanner(System.in);
    
    x1 = sc.nextInt();
    y1 = sc.nextInt();
    x2 = sc.nextInt();
    y2 = sc.nextInt();
    
    if(x1==x2){
        int diff = Math.abs(y2-y1);
        int new_coordinates_x = x1+diff;
        int new_coordinates_y = y1;
        int new_coordinates1_x = x2+diff;
        int new_coordinates1_y = y2;
        System.out.println(new_coordinates_x + " " + new_coordinates_y + " " + new_coordinates1_x + " " + new_coordinates1_y);
    }
    
    else if(y1==y2){
        int diff = Math.abs(x2-x1);
        int new_coordinates_x = x1;
        int new_coordinates_y = y1+diff;
        int new_coordinates1_x = x2;
        int new_coordinates1_y = y2+diff;
        System.out.println(new_coordinates_x + " " + new_coordinates_y + " " + new_coordinates1_x + " " + new_coordinates1_y);
    }
    else if(Math.abs(y2-y1) == Math.abs(x2-x1)){
        System.out.println(x1 + " " + y2 + " " + x2 + " " + y1);
    }else{
        System.out.println(-1);
    }
    
  }
}
