#include <stdio.h>

int isPerfectSquare( int n)
{
    if (n < 0)
        return 0;

    if (n == 0)
        return 1;

    for ( int i = 1; i <= n / i; i++)
    {
        if (i * i == n)
            return 1;
    }

    return 0;
}

int main()
{
    int n;
    printf("enter the number");

    scanf("%d", &n);

    printf("%d", isPerfectSquare(n));

    return 0;
}