public class Sum {
    public static void main(String[] args) {
        int sum1 = 0, sum2 = 0, sum3 = 0;

        for (int i = 1; i <= 10; i++) sum1 += i;
        for (int i = 20; i <= 30; i++) sum2 += i;
        for (int i = 35; i <= 45; i++) sum3 += i;

        System.out.println(sum1);
        System.out.println(sum2);
        System.out.println(sum3);
    }
}