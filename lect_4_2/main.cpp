// Дана строка символов
// УДалить из неё все кратные рядом стоящие одинаковые символы, оставив по одному
// AAABBCC -> ABC

#include <stdio.h>


int main()
{
    constexpr int SIZE = 1024;
    char str[SIZE];
    char str_result[SIZE];

    //scanf( "%s", &str[0] );
    scanf( "%s", str );

    int result_index = 0;
    char ch = '\0';
    //for ( int i = 0; str[i] != '\0'; ++i )
    for ( int i = 0; str[i]; ++i )
    {
        if ( ch != str[i] )
        {
            str_result[result_index] = str[i];
            ch = str[i];
            ++result_index;
        }
    }
    str_result[result_index] = '\0';
    printf( "%s", str_result );
    return 0;
}
