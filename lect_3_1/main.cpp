// Написать программу, кот имеет меню с выбором математич операции
#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int ch = 0;
    do
    {
        switch ( ch ) {
        case 1:
        {
            double x;
            printf( "Enter x:" );
            scanf( "%lf", &x);
            printf( "cos %f is %f \n", x, cos( x ) );
            break;
        }
        case 2:
        {
            double x;
            printf( "Enter x:" );
            scanf( "%lf", &x);
            printf( "sin %f is %f \n", x, sin( x ) );
            break;
        }
        }
        printf( "1. Calculate cos()\n" );
        printf( "2. Calculate sin()\n" );
        printf( "3. Exit\n" );
        scanf( "%d", &ch );
        //ch = getchar();
    } while ( ch != 3 );
    return 0;
}
