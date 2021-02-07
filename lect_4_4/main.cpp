// Заполнить матрицу А(7x8) нулями и единицами по след правилам:
// если сумма индексов элемента четная - 0
// если сумма индексов элемента нечетная - 1

#include <stdio.h>
int main()
{
    constexpr int X = 7;
    constexpr int Y = 8;
    int A[X][Y];

    for ( int i = 0; i < X; ++i )
        for ( int j = 0; j < Y; ++j )
            // 0x1 - число в 16 системе счисления (или 0b1)
            A[i][j] = (( i + j ) & 0x1) ? 1 : 0;

    for ( int i = 0; i < X; ++i )
    {
        for ( int j = 0; j < Y; ++j )
            printf( "%d ", A[i][j] );
        printf( "\n" );
    }


    return 0;
}
