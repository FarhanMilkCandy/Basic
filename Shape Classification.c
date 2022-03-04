#include <stdio.h>
#include <math.h>

void quadliteralFromFourVertices(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    double vertice1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    double vertice2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
    double vertice3 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
    double vertice4 = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));

    if (vertice1 == vertice2 && vertice2 == vertice3 && vertice3 == vertice4 && x1 == x4)
    {
        printf("Square");
    }
    else if (vertice1 == vertice3 && vertice2 == vertice4 && vertice2 != vertice3 && vertice1 != vertice4 && x1 == x4)
    {
        printf("Rectangle");
    }
    else if (vertice1 == vertice2 && vertice2 == vertice3 && vertice1 == vertice4 && x1 != x4)
    {
        printf("Rhombus");
    }
    else if (vertice1 != vertice2 && vertice2 != vertice3 && vertice3 != vertice4 && x1 != x4)
    {
        printf("Parallelogram");
    }
    else
    {
        printf("Quadliteral cannot be classified");
    }
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    return 0;
}
