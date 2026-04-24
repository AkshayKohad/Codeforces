import java.util.*;


public class Main {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);  
    String name1 = sc.nextLine();
    String name2 = sc.nextLine();
    String available = sc.nextLine();
    
    char[] name1_char = name1.toCharArray();
    char[] name2_char = name2.toCharArray();
    
    char[] available_char = available.toCharArray();
    
    int[] countFreq = new int[26];
    for(int i=0;i<26;i++){
        countFreq[i] = 0;
    }
    
    for(int i=0;i<available.length();i++){
        int ch = available_char[i]-'A';
        countFreq[ch]++;
    }
    
    for(int i=0;i<name1.length();i++){
        int ch = name1_char[i]-'A';
        if(countFreq[ch]>0)countFreq[ch]--;
        else{
            System.out.println("NO");
            return;
        }
    }
    for(int i=0;i<name2.length();i++){
        int ch = name2_char[i]-'A';
        if(countFreq[ch]>0)countFreq[ch]--;
        else{
            System.out.println("NO");
            return;
        }
    }
    
    for(int i=0;i<26;i++){
        if(countFreq[i]>0){
            System.out.println("NO");
            return;
        }
    }
    
    System.out.println("YES");
    
  }
}
