// Дана строка символов до точки. Подсчитать в ней число латинских букв

#include <stdio.h>

int main()
{
    constexpr int SIZE = 1024;
    char str[SIZE];
    int str_result = 0;
    scanf( "%s", str );
    char ch = '.';
    for ( int i = 0; str[i] != ch; ++i )
    {
        if ( ('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && <= str[i] < 'Z') )
        {
            ++str_result;
        }
    }
    printf( "%d", str_result );
    return 0;
}
