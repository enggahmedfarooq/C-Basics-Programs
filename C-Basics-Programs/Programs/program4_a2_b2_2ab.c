#include <stdio.h>

int main() {
    int a, b, result;

    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);

    result = (a * a) + (b * b) + (2 * a * b);

    printf("The result of a² + b² + 2ab is: %d\n", result);

    return 0;
}
