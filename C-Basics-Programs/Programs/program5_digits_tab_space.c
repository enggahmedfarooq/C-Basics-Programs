#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5;

    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    d1 = num / 10000;
    d2 = (num / 1000) % 10;
    d3 = (num / 100) % 10;
    d4 = (num / 10) % 10;
    d5 = num % 10;

    printf("%d\t%d\t%d\t%d\t%d\n", d1, d2, d3, d4, d5);

    return 0;
}
