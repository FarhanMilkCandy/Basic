#include <stdio.h>

int main()
{
    int i =1, j, count= 1;
    while(count<=15){
        j = 1;
        while(j<=i){
            printf("%d ", count);
            count ++;
            j++;
        }
        printf("\n");
        i++;
    }
    getchar();
    getchar();
    return 0;
}
