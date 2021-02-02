// Дано натуральное число N
// Вывести все нат числа, на которые делится N без остатка
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    unsigned long long int N;
    printf( "Please enter N : " );
    scanf( "%llu", &N );

    printf( "Devider N is : " );
    for ( unsigned long long int i = 1; i <= N; ++i )
    {
        if ( N % i == 0 )
        {
            printf("%llu ", i);
        }
    }
    return 0;
}
