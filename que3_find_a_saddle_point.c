#include <stdio.h>

int main()
{
    int r, c, a[100][100];
    int count = 0, flag;

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
        for(int j = 0; j < c; j++)
        {
            flag = 1;

            if(i > 0 && a[i][j] <= a[i-1][j])
                flag = 0;

            if(i < r-1 && a[i][j] <= a[i+1][j])
                flag = 0;

            if(j > 0 && a[i][j] <= a[i][j-1])
                flag = 0;

            if(j < c-1 && a[i][j] <= a[i][j+1])
                flag = 0;

            if(flag == 1)
            {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}