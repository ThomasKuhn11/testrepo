import java.util.Scanner;

public class SumCalculator {
    public static void main(String[] args) {
        int num1, num2, sum;
        int test = 1;

        Scanner scanner = new Scanner(System.in);

        // Ask the user for input
        System.out.print("Enter the first number: ");
        num1 = scanner.nextInt();

        System.out.print("Enter the second number: ");
        num2 = scanner.nextInt();

        // Calculate the sum
        sum = num1 + num2;

        // Print the result
        System.out.println("The sum is: " + sum);
    }
}
