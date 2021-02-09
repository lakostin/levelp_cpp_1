#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int* create_matrix( int x, int y)
{
    return new int[ x * y ];
}


void destroy_matrix(int* matrix)
{
    delete[] matrix;
}


void fill_matrix( int* matrix, int x, int y)
{
    srand(time(nullptr));
    for (int i = 0; i < x; ++i )
    {
        for (int j = 0; j < y; ++j )
        {
            *(matrix + i * y + j) = rand() % 100;
        }
    }
}


void print_matrix(int* matrix, int x, int y)
{
    srand(time(nullptr));
    for (int i = 0; i < x; ++i )
    {
        for (int j = 0; j < y; ++j )
        {
            printf("%2d ", *(matrix + i * y + j));
        }
        printf("\n");
    }
}

int get_sum(int* matrix, int x, int y)
{
    int sum = 0;
    for (int i = 0; i < x; ++i )
    {
        for (int j = 0; j < y; ++j )
        {
            if ( y - j - 1 < i )
                sum += *( matrix + i*y + j);
        }
    }
    return sum;
}

