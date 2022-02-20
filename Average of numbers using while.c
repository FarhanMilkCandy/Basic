#include <stdio.h>

int main()
{
    int n = 0, count = 0;
    float sum = 0;

    for (;;)
    {
        scanf("%d", &n);
        if (n == -1)
        {
            printf("%f", sum / count);
            break;
        }
        else
        {
            sum += n;
            count++;
        }
    }
    getchar();
    getchar();
    return 0;
}
