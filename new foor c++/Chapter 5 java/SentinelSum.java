import java.util.Scanner;

public class SentinelSum {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int sum = 0;
        int number;

        System.out.println("Enter integers (0 to stop):");

      
        number = input.nextInt();

        while (number != 0) {
            sum += number;
            number = input.nextInt(); 
        }

       
        System.out.println("Total sum = " + sum);

        input.close();
    }
}