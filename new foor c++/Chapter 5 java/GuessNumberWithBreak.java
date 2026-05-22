import java.util.Scanner;

public class GuessNumberWithBreak {
    public static void main(String[] args) {
        
        int guess;

        Scanner input = new Scanner(System.in);
        int number=input.nextInt();

        while (true) {
            System.out.print("Enter your guess: ");
            guess = input.nextInt();

            if (guess == number) {
                System.out.println("Correct! You guessed the number.");
                break;
            } else if (guess > number) {
                System.out.println("Too high. Try again.");
            } else {
                System.out.println("Too low. Try again.");
            }
        }
    }
}