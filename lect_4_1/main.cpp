// Определить, представляет ли собой элементы массива А[20] возрастающую последовательность
#include <iostream>
#include "massiv.h"

int main()
{
    constexpr int SIZE = 5;
    int M[SIZE];

    for ( int i = 0; i < SIZE; ++i )
    {
        scanf( "%d", &M[i] );
    }


    printf("%s", is_growing(M, SIZE) ? "true" : "false");

    return 0;
}
