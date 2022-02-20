#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    if (x1 != 0 && y1 != 0 && x2 != 0 && y2 != 0)
    {
        int distance = 0;
        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (distance <= 10)
        {
            printf("Near");
        }
        else
        {
            printf("Far");
        }
    }
    getchar();
    getchar();
    return 0;
}
