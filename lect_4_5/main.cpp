// Поменять местами мин эл-т матрицы P(9х11) и элемент значения которого совпадает с заданным х
// Если указ эл-т в матр отсутствует, вывести сообщ об этом
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    constexpr int X = 9;
    constexpr int Y = 11;
    int A[X][Y];

    for ( int i = 0; i < X; ++i )
        for ( int j = 0; j < Y; ++j )
            A[i][j] = rand() % 100;

    for ( int i = 0; i < X; ++i )
    {
        for ( int j = 0; j < Y; ++j )
            printf( "%2d ", A[i][j] );
        printf( "\n" );
    }
    int x;
    printf("Vvedite chislo x:");
    scanf("%d", &x);

    int min = 100;
    int x_min;
    int y_min;
    int x_min2 = -1;
    int y_min2 = -1;
    for ( int i = 0; i < X; ++i )
        for ( int j = 0; j < Y; ++j )
        {
            if (A[i][j] < min)
            {
                min = A[i][j];
                x_min = i;
                y_min = j;
            }
            if ( x == A[i][j])
            {
                x_min2 = i;
                y_min2 = j;
            }
        }
    if ( x_min2 == -1 && y_min2 == -1 )
        printf("x otsutstvuyet v matrice");
    else
    {
        int temp_var = A[x_min][y_min];
        A[x_min][y_min] = A[x_min2][y_min2];
        A[x_min2][y_min2] = temp_var;
        for ( int i = 0; i < X; ++i )
        {
            for ( int j = 0; j < Y; ++j )
                printf( "%2d ", A[i][j] );
            printf( "\n" );
        }
    }
    return 0;
}
