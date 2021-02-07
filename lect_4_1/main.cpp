// Определить, представляет ли собой элементы массива А[20] возрастающую последовательность
#include <iostream>


int main()
{
    constexpr int SIZE = 5;
    int M[SIZE];

    for ( int i = 0; i < SIZE; ++i )
    {
        scanf( "%d", &M[i] );
    }

    bool is_upper = true;
    for ( int i = 0; i < SIZE && is_upper ; ++i )
    {
        if ( M[i] > M[i+1] )
        {
            is_upper = false;
        }
    }
    printf("%s", is_upper ? "true" : "false");

    return 0;
}
