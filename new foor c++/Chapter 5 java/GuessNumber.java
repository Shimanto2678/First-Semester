import java.util.Scanner;

public class GuessNumber {
    public static void main(String[] args) {
        
        int number = (int)(Math.random() * 101);

        Scanner input = new Scanner(System.in);
        int guess;

        System.out.println("Guess a number between 0 and 100");

     
        do {
            System.out.print("Enter your guess: ");
            guess = input.nextInt();

            if (guess > number) {
                System.out.println("Too high");
            } else if (guess < number) {
                System.out.println("Too low");
            } else {
                System.out.println("Correct!");
            }

        } while (guess != number);

        input.close();
    }
}
