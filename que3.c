#include <stdio.h>

long long area(long long length, long long width)
{
    return length * width;
}

int main()
{
    long long length, width, result;
    printf("enter l,b,w");

    scanf("%lld %lld", &length, &width);

    result = area(length, width);

    printf("%lld", result);

    return 0;
}