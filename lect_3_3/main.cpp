// Определить, является ли данное число n полиндромом
// пример: 32423
#include <stdio.h>



int main()
{
    int value;
    int dex = 0;
    printf( "Enter a number: \n");
    scanf( "%d", &value );
    const int value_copy = value;
    while ( value != 0 ) {
        // /= - поделить и присвоить новое значение
        value /= 10;
        ++dex;
    }
    //printf( "Current value: %d\n", dex);
    value = value_copy;
    int reverse = 0;
    while ( value != 0 ) {
        int right_value = value % 10;
        //printf ( "%d", right_value );
        value /= 10;
        reverse *= 10;
        reverse += right_value;
    }
    //printf("Reverse: %d", reverse);
    if ( value_copy == reverse ) {
        printf("Value is a polindrom!\n");
    }
    else {
        printf("Value is not a polindrom!\n");
    }

    return 0;
}
