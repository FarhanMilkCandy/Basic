#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    scanf("%d %d", &x, &y);

    if(x == 0 && y==0)
    {
        printf("Origin");
    }
    else if(x > 0 && y > 0)
    {
        printf("First quadrant");
    }else if(x < 0 && y > 0)
    {
        printf("Second quadrant");
    }
    else if(x < 0 && y < 0)
    {
        printf("Third quadrant");
    }
    else if(x > 0 && y < 0)
    {
        printf("Fourth quadrant");
    }

    getchar();
    getchar();
    return 0;
}