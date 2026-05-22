
public class printmsg {

    public static void main(String[] args) {
       

        printMessage(10, "This is a test message");
    }

    static void printMessage(int n, String s) {
        for (int i = 0; i < n; i++) {
            System.out.println(s);
        }
    }
}