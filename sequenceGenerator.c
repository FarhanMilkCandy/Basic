#include <stdlib.h>
#include <stdio.h>

int main()
{
    int int1, int2, int3, int4, temp1 = 0, temp2 = 0;
    scanf("%d %d %d %d", &int1, &int2, &int3, &int4);
    temp1 = int1;
    temp2 = int2;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                for (int l = 0; l < 1; l++)
                {
                    printf("%d %d %d %d\n", int1, int2, int3, int4);
                    temp1=int3;
                    int3=int4;
                    int4=temp1;
                }
                temp1=int2;
                int2=int3;
                int3=int4;
                int4=temp1;
            }
        }
        temp1 = int1;
        int1 = int2;
        int2 = int3;
        int3 = int4;
        int4 = temp1;
    }

    getchar();
    getchar();
    return 0;
}