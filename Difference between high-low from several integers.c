#include <stdio.h>

int main()
{
    int n = 0, highest = 0, lowest = 0;
    scanf("%d", &n);
    if (n != -1)
    {
        highest = n;
        lowest = n;
        while (1)
        {
            scanf("%d", &n);
            if (n == -1)
            {
                printf("%d", (highest - lowest));
                break;
            }
            else
            {
                if (n > highest)
                {
                    highest = n;
                }
                else if (n < lowest)
                {
                    lowest = n;
                }
            }
        }
    }
    getchar();
    getchar();
    return 0;
}
