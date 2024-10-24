#include <stdio.h>

int main() {
    int number, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &number);

    sum = (number / 1000) + ((number / 100) % 10) + ((number / 10) % 10) + (number % 10);

    printf("Sum of digits: %d\n", sum);

    return 0;
}
