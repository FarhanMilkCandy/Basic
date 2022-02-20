#include <stdio.h>

int main()
{
    int i =1, j, count= 1;
    for(i=5; i>=1; i--)
    {   
        for(j=(5-i); j>0; j--)
        {
            printf(" ");
        }
        for(j=0; j<i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getchar();
    getchar();
    return 0;
}
