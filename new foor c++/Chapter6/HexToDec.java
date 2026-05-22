import java.util.*;

public class HexToDec {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String hex = sc.nextLine();
        System.out.println(hexToDecimal(hex));
    }

    static int hexToDecimal(String hex) {
        hex = hex.toUpperCase();
        int decimal = 0;

        for (int i = 0; i < hex.length(); i++) {
            char ch = hex.charAt(i);
            int value;

            if (ch >= '0' && ch <= '9') value = ch - '0';
            else value = ch - 'A' + 10;

            decimal = decimal * 16 + value;
        }
        return decimal;
    }
}