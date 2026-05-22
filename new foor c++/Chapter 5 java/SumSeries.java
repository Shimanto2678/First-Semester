public class SumSeries {
    public static void main(String[] args) {
        int sumInt = 0; 
        for (int i = 1; i <= 100; i++) {
            sumInt += i; 
        }
        double sum = sumInt / 100.0;
        System.out.println("The sum of the series from 0.01 to 1.0 is: " + sum);
    }
}