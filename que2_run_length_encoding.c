#include <stdio.h>

int main()
{
    char str[1000];
    int count = 1;

    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
        else
        {
            printf("%c%d", str[i], count);
            count = 1;
        }
    }

    return 0;
}