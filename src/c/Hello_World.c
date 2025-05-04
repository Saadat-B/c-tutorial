#include <stdio.h>

void my_strcat(char *str1, const char *str2)
{
    // Move to the end of str1
    while (*str1 != '\0')
    {
        str1++;
    }

    // Copy str2 to the end of str1
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0'; // Null-terminate the final string
}

int main()
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";

    my_strcat(str1, str2);

    printf("Result: %s\n", str1); // Output: Hello, world!

    return 0;
}
