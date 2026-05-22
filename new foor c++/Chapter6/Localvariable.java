public class Localvariable {

    public static void main(String[] args) {
        int x = 10; // local variable of main method

        System.out.println("x in main: " + x);

        testMethod(); // calling another method

        // System.out.println(y); // error: y is not visible here
    }

    static void testMethod() {
        int y = 20; // local variable of testMethod

        System.out.println("y in testMethod: " + y);

        if (true) {
            int z = 30; // local variable inside block (if block)
            System.out.println("z inside if block: " + z);
        }

        // System.out.println(z); // error: z is not visible outside the block
    }
}