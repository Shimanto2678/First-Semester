public class PrimeNumbers {
    public static void main(String[] args) {
        int count = 0, number = 2, lineCount = 0;

        while (count < 50) {
            boolean isPrime = true;

            for (int i = 2; i * i <= number; i++) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                System.out.print(number + " ");
                count++;
                lineCount++;

                if (lineCount == 10) {
                    System.out.println();
                    lineCount = 0;
                }
            }

            number++;
        }
    }
}