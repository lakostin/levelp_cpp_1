// Ввести натур число n
// Опред, явл ли оно совершенным
// Совершенное - натур число, равное сумме всех своих делителей, не превосходящих само число n
// Пример: 6 = 1 + 2 + 3
// 28 = 1 + 2 + 4 + 7 + 14
#include <stdio.h>

int main()
{
    int n;
    int sum=0;
    printf("Enter natural number: \n");
    scanf("%d", &n);
    for (int i=1; i < n; ++i)
    {
        if ( n % i == 0 )
        {
            sum += i;
        }
    }
    printf("%s", sum == n ? "yes\n" : "no\n" );
    return 0;
}
