#include <stdio.h>

int main()
{
    int r, c, a[100][100];
    int sum;
    printf("enter the number of rows and columns");
    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < r; i++)
    {
        sum = 0;

        for(int j = 0; j < c; j++)
        {
            sum = sum + a[i][j];
        }

        printf("%d ", sum);
    }

    printf("\n");

    for(int j = 0; j < c; j++)
    {
        sum = 0;

        for(int i = 0; i < r; i++)
        {
            sum = sum + a[i][j];
        }

        printf("%d ", sum);
    }

    return 0;
}