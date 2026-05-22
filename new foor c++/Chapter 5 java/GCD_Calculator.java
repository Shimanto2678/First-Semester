import java.util.Scanner;

public class GCD_Calculator {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the first positive integer: ");
        int n1 = input.nextInt();

        System.out.print("Enter the second positive integer: ");
        int n2 = input.nextInt();

        int gcd = 1;

        int smaller = (n1 < n2) ? n1 : n2;

        for (int k = 2; k <= smaller; k++) {
            if (n1 % k == 0 && n2 % k == 0) {
                gcd = k;
            }
        }

        System.out.println("The greatest common divisor of " + n1 + " and " + n2 + " is: " + gcd);
        
        input.close();
    }
}