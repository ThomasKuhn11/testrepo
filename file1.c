#include <stdio.h>

int main() {
    int num1, num2, sum;
    int test = 0;

    // Ask the user for input
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the sum
    sum = num1 + num2;

    // Print the result
    printf("The sum is: %d\n", sum);

    return 0;
}
