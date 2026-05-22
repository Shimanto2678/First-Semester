import java.util.Scanner;
public class ttt {
    public static void main(String[] args) {
         int sum=0;
       for(int i =0; i < 100; i++)
       {   System.out.println("Enter the number :");
           Scanner sc = new Scanner(System.in);
         int k = sc.nextInt();
         sum = sum + k;
       }
       System.out.println("Your sum is : " + sum);
       
       
    }
}
