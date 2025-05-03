#include <stdio.h>
#include <stdbool.h>


int main()
{
    printf("sizeof bool is %zu byte\n", sizeof(bool));
    printf("sizeof int is %zu byte\n", sizeof(int));
    printf("sizeof float is %zu byte\n", sizeof(float));
    printf("sizeof double is %zu byte\n", sizeof(double));
    printf("sizeof size_t is %zu byte\n", sizeof(size_t));
    printf("sizeof long is %zu byte\n", sizeof(long));
    return 0;
}