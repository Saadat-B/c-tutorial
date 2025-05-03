#include <stdio.h>

float max_sneklang_memory(int max_threads, int memory_per_thread)
{

    return (float)(max_threads * memory_per_thread);
}

int main()
{

    float max_memory = max_sneklang_memory(4, 512);

    printf("Max memory %f\n", max_memory);

    return 0;
}