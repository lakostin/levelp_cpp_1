#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double R, a, d;
    printf( "Please enter circle radius R: " );
    scanf( "%lf", &R );
    printf( "Please enter length of the triangle side a: " );
    scanf( "%lf", &a );
    printf( "Please enter square side length d: " );
    scanf( "%lf", &d );
    double S1 = M_PI * pow ( R, 2 );

    double S2 = pow ( a, 2 ) * sqrt(3) / 4;

    double S3 = pow ( d, 2);

    printf("The biggest square goes to %lf",
        ( S1 < S2 )
           ? (( S2 < S3 )
              ? S3
              : S2 )
           : (( S1 < S3 )
              ? S3
              : S1 ));
    return 0;
}
