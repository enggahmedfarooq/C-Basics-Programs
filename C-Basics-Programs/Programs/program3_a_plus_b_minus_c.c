#include <stdio.h>

int main() {
    int a, b, c, result;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    result = a + b - c;

    printf("The result of a + b - c is: %d\n", result);

    return 0;
}
