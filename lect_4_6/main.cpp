// Вычисл средне арифм значение элементов, лежащее на диагонали матрицы 8х8
// Заменить этим значением все элементы матрицы, не лежащие на диагонали
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    constexpr int SIZE = 8;
    int A[SIZE][SIZE];

    for ( int i = 0; i < SIZE; ++i )
        for ( int j = 0; j < SIZE; ++j )
        {
            A[i][j] = rand() % 100;
            if (( i == j ) || ( (SIZE-1-i) == j ))
                sum += A[i][j]
        }

    for ( int i = 0; i < SIZE; ++i )
    {
        for ( int j = 0; j < SIZE; ++j )
            printf( "%2d ", A[i][j] );
        printf( "\n" );
    }

    double aver = sum/double(SIZE*2);
    for ( int i = 0; i < SIZE; ++i )
        for ( int j = 0; j < SIZE; ++j )
            if (( i != j ) && ( (SIZE-1-i) != j ))
                A[i][j] = aver;

    for ( int i = 0; i < SIZE; ++i )
    {
        for ( int j = 0; j < SIZE; ++j )
            printf( "%2d ", A[i][j] );
        printf( "\n" );
    }

    return 0;
}
