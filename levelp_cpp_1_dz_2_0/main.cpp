#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main()
{
    double x;
    printf("Please enter value for x var: ");
    scanf( "%lf", &x);
    double Y = ( 2 * cos( x - M_PI / 6) + sqrt(2) ) / ( 1 / 2 * log( x ) + pow( sin( pow ( x, 2 )), 2  ) * exp( 3 * x ) );
    printf("%lf\n", Y);
    return 0;
}
