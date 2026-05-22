import java.util.*;

public class Convert {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d = sc.nextInt();
        if (d == 0) {
            System.out.println(0);
            return;
        }
        StringBuilder sb = new StringBuilder();
        char[] hex = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
        while (d > 0) {
            int r = d % 16;
            sb.append(hex[r]);
            d /= 16;
        }
        System.out.println(sb.reverse().toString());
    }
}