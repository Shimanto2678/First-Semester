public class Main {
public static int calculateProduct(int a, int b) {
        int product = 1;
        for (int i = 1; i <= 10; i++) {
            product *= i; }
        return product;
    }
 public static void main(String[] args) {
        
        int product = calculateProduct(1,10);
        System.out.println("Product (1 to 10): " + product);
    }
}
