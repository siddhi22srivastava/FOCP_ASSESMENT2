#include <stdio.h>

int main()
{
    int n, a[1000];
    int current = 1, maximum = 1;
    printf("enter the number of elements and the elements");

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if(current > maximum)
        {
            maximum = current;
        }
    }

    printf("%d", maximum);

    return 0;
}