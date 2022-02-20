#include <stdio.h>

int main()
{
    int mark;
    int Count = 0, APlus = 0, A = 0, AMinus = 0, BPlus = 0, B = 0, BMinus = 0, CPlus = 0, C = 0, CMinus = 0, DPlus = 0, D = 0, F = 0;
    int sum = 0;
    while (mark != -1)
    {
        printf("\nEnter Marks: \n");
        scanf("%d", &mark);
        if (mark <= 100 && mark >= 97)
        {
            APlus++;
        }
        else if (mark >= 90 && mark <= 96)
        {
            A++;
        }
        else if (mark >= 87 && mark <= 89)
        {
            AMinus++;
        }
        else if (mark >= 84 && mark <= 87)
        {
            BPlus++;
        }
        else if (mark >= 80 && mark <= 83)
        {
            BMinus++;
        }
        else if (mark >= 77 && mark <= 79)
        {
            B++;
        }
        else if (mark >= 74 && mark <= 76)
        {
            CPlus++;
        }
        else if (mark >= 70 && mark <= 73)
        {
            C++;
        }
        else if (mark >= 67 && mark <= 69)
        {
            CMinus++;
        }
        else if (mark >= 64 && mark <= 66)
        {
            DPlus++;
        }
        else if (mark >= 61 && mark <= 63)
        {
            D++;
        }
        else if (mark <= 60 && mark >= 0)
        {
            F++;
        }
        else if (mark == -1)
            break;
        else
            printf("Marks Must be Between 0 to 100\n");

        if (mark != -1)
        {
            Count++;
            if (mark <= 60 && mark >= 0)
                Count--;
            else
            {
                sum += mark;
            }
        }
    }
    printf("\nA+ = %d", APlus);
    printf("\nA = %d", A);
    printf("\nA- = %d", AMinus);
    printf("\nB+ = %d", BPlus);
    printf("\nB = %d", B);
    printf("\nB- = %d", BMinus);
    printf("\nC+ = %d", CPlus);
    printf("\nC = %d", C);
    printf("\nC- = %d", CMinus);
    printf("\nD+ = %d", DPlus);
    printf("\nD = %d", D);
    printf("\nTotal Passed= %d", Count);
    printf("\nFail = %d", F);
    printf("\nTotal Marks= %d", sum);
    
    getchar();
    getchar();
    return 0;
}