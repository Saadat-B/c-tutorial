#include <stdio.h>

int main()
{

    int num = 1;
    float fl = 0.1;
    char egChar = 'c';
    char *str = "this is a string";

    printf("this is an integer %d\n", num);
    printf("this is a character %c\n", egChar);
    printf("this is a string made using char* pointer %s\n", str);
    printf("this is a float %f\n", fl);

    return 0;
}