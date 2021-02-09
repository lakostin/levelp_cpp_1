#include "massiv.h"

bool is_growing( int* mas, int size )
{
    bool is_upper = true;
    for ( int i = 0; i < size && is_upper ; ++i )
    {
        if ( mas[i] > mas[i+1] )
        {
            is_upper = false;
        }
    }
    return is_upper;
}
