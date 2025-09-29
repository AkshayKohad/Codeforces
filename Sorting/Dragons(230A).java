import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int s = sc.nextInt();
        int n = sc.nextInt();
        
        int[][] dragons = new int[n][2];
        for (int i = 0; i < n; i++) {
            dragons[i][0] = sc.nextInt(); // power
            dragons[i][1] = sc.nextInt(); // bonus
        }

        Arrays.sort(dragons, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[0], b[0]); // sort by power
            }
        });

        for (int i = 0; i < n; i++) {
            if (s <= dragons[i][0]) {
                System.out.println("NO");
                return;
            }
            s += dragons[i][1];
        }

        System.out.println("YES");
    }
}
