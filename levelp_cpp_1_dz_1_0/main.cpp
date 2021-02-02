#include <stdio.h>

int main()
{
    int a=5;
    int c=5;
    int d=1;
    int b=3;
    a=a+b-2;
    c=c+1;
    d=c-a+d;
    a=a*c;
    c=c-1;
    a=a/10;
    c=c/2;
    b=b-1;
    d=d*(c+b+a);
    printf("d: %d\n", d);
    return 0;
}

