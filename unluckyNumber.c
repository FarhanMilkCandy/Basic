#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n, temp, div, flag = 0;
    scanf("%d", &n);
    div = n;
    while (div != 0)
    {
        temp = div % 100;
        if (temp == 13)
        {
            flag = 1;
            break;
        }
        div = div / 10;
    }

    if (flag == 0)
    {
        printf("%d is not an unlucky number", n);
    }
    else
    {
        printf("%d is an unlucky number", n);
    }

    getchar();
    getchar();
    return 0;
}
