// С клавиатуры вводится последовт-ть чисел. признак окончания ввода - ввод нуля
// найти макс из них
#include <stdio.h>

int main()
{
    int queue;
    int max = 0;
    printf(" Enter queue of digits: ");
    do {
        scanf( "%d", &queue );
        if ( queue > max ) {
            max = queue;
        }
    }
    while ( queue != 0 );
    printf("Max value is: %d", max);
    return 0;
}
