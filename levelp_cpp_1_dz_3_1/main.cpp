//  Найти наименьший общий делитель трех натуральных чисел
// (1 будет считаться наименьшим общим делителем только в том случае, когда других общих делителей у заданных чисел нет).
#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter first natural digit: ");
    scanf("%d", &x);

    printf("Enter second natural digit: ");
    scanf("%d", &y);

    printf("Enter third natural digit: ");
    scanf("%d", &z);

    int min;
    if ( ( x < y ) && ( x < z ) )
       {
          min = x;
       }
       else if ( y < z )
       {
          min = y;
       }
       else
       {
          min = z;
       }

    int nod = 1;
    for ( int i = 2; ( i <= min && nod == 1 ); ++i )
    {
        if (( x % i == 0 ) && ( y % i == 0 ) && ( z % i == 0 ))
             nod = i;
    }

    printf("Naimenschiy obschiy delitel: %d\n", nod);
    return 0;
}
