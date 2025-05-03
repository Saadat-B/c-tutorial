#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point;

void printPoint(Point p)
{
    printf("Point from function: (%d, %d)\n", p.x, p.y);
}

int main()
{

    Point p = {5, 15};
    printPoint(p);

    return 0;
}