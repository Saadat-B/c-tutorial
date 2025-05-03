#include <stdio.h>
#include <stdbool.h>

void printNumbers(int start, int end)
{
    if (start > end)
        return;
    for (int i = start; i <= end; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    printNumbers(0, 10);
}