#include <stdio.h>
#include <math.h>
// Вывести сумму ряда f(x) = 1/2 * x + 2/3 * x^2 + 3/4 * x^3 + 4/5 * x^4 ...
// с точностью e = 10^-5 в диапазоне от 0 до 1
int main()
{
    double x;
    printf("Enter x: \n", x);
    scanf("%lf", &x);
    double sum = 0;
    for ( double i = 1; true; ++i )
    {
        double y = i / ( i + 1 ) * pow ( x, i);
        sum += y;
        if ( y < 10e-5 )
        {
            break;
        }
    }
    printf( "Sum: %f", sum);
    return 0;
}
