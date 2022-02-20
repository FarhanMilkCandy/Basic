#include <stdio.h>

int main()
{
    int i = 1, j, count = 1;
    while (count <= 15)
    {
        j = 1;
        while (j <= i)
        {
            if ((i+j) % 2 == 0)
            {
                printf("1 ");
            }
            else
                printf("0 ");
            count++;
            j++;
        }
        printf("\n");
        i++;
    }
    getchar();
    getchar();
    return 0;
}
