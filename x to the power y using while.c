#include <stdio.h>

int main()
{
    int base = 0, exponent = 0, result =1;
    printf("Enter base as an Integer: ");
    scanf("%d", &base);
    printf("Enter exponent as an Integer: ");
    scanf("%d", &exponent);
    while(exponent > 0)
    {
        result *= base;
        exponent--;
    }
    printf("%d", result);
    getchar();
    getchar();
    return 0;
}