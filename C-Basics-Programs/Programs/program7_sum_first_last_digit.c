#include <stdio.h>

int main() {
    int num, first, last, sum;

    printf("Enter a four-digit number: ");
    scanf("%d", &num);

    last = num % 10;
    first = num / 1000;

    sum = first + last;

    printf("The sum of first and last digit is: %d\n", sum);

    return 0;
}
