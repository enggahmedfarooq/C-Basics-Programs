#include <stdio.h>

int main() {
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a * b * c;

    printf("The multiplication of %d, %d, and %d is: %d\n", a, b, c, result);

    return 0;
}
