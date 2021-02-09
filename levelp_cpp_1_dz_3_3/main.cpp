// Перевести число из десятичной системы счисления в двоичную.
#include <stdio.h>

//15 7  3  1  0
//2  2  2  2
//1  1  1  1

//45 22 11 5  2  1  0
//2  2  2  2  2  2
//1  0  1  1  0  1


int main()
{
    int N;
    printf("Enter any digit\n");
    scanf("%d", &N);

    int reverse = 0;

    while (N != 0)
    {
        int right_value = N % 2;
        N /= 2;
        reverse *= 10;
        reverse += right_value;
    }

    printf("Chislo v dvoichnoy systeme schisleniya: %d\n", reverse);

    return 0;
}
