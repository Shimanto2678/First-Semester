public class MonteCarloPi {
    public static void main(String[] args) {

        int numberOfTrials = 1000000;
        int numberOfHits = 0;

        for (int i = 0; i < numberOfTrials; i++) {
            double x = Math.random();
            double y = Math.random();

            if (x * x + y * y <= 1) {
                numberOfHits++;
            }
        }

        double pi = 4.0 * numberOfHits / numberOfTrials;

        System.out.println("Estimated value of pi: " + pi);
    }
}