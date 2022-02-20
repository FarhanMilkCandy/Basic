#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n != 0 && n != 1)
    {
        for(i=n; i>0; i--)
        {
            fact = fact * i;
        }
    }
    printf("%d", fact);
    getchar();
    getchar();
    return 0;
}