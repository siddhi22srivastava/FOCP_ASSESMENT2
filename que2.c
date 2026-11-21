#include <stdio.h>

int countMultiples(int n, int k)
{return n / k;}

int main()
{
    int n, k;
    printf("enter the numbers");

    scanf("%d %d", &n, &k);

    printf("%d", countMultiples(n, k));

    return 0;
}