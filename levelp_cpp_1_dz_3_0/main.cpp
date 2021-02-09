// Дано натуральное число N. Составить программу для определения количества цифр в этом числе.
#include <stdio.h>

int main()
{
    int N;
    int sum = 0;
    printf("Enter natural digit: ");
    scanf("%d", &N);

    while ( N != 0 ) {
        N /= 10;
        sum += 1;
    }

    printf("Sum of a natural digit: %d\n", sum);
    return 0;
}
