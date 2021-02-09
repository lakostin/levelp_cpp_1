//  Поменять местами цифры старшего и младшего разрядов данного натурального числа
// (например, из числа 3879 получится 9873).
#include <stdio.h>

// 12345 -> 52341

int main()
{
    int N;
    printf("Enter natural digit: ");
    scanf("%d", &N);
    int copy_N = N;
    int last_digit = N % 10;

    int new_N = 0;
    while ( N >= 10 ) {
        N /= 10;
    }
    int first_digit = N;

    //printf("%d\n", first_digit);

    int reverse = 0;
    while ( copy_N != 0 ) {
        if ( copy_N % 10 != last_digit )
        {
            int right_value = copy_N % 10;
            reverse *= 10;
            reverse += right_value;
        }
        copy_N /= 10;
    }
    //printf("%d\n", reverse);

    int reverse_middle = reverse / 10;
    int reverse_again = 0;

    while ( reverse_middle != 0 ) {
        int right_value_reverse = reverse_middle % 10;
        reverse_again *= 10;
        reverse_again += right_value_reverse;
        reverse_middle /= 10;
    }
    //printf("%d\n", reverse_again);



    printf("new digit: %d%d%d\n", last_digit, reverse_again, first_digit);

    return 0;
}
