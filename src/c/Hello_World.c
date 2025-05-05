#include <string.h>
#include <stdio.h>

typedef struct
{
    size_t length;
    char buffer[64];
} TextBuffer;

int smart_append(TextBuffer *dest, const char *src);

int smart_append(TextBuffer *dest, const char *src)
{

    const size_t MAX_BUFFER_SIZE = 64;
    size_t space_left = MAX_BUFFER_SIZE - dest->length - 1;
    size_t src_len = strlen(src);

    if (src_len > space_left)
    {

        strncat(dest->buffer, src, space_left);
        dest->length = MAX_BUFFER_SIZE - 1;
        dest->buffer[MAX_BUFFER_SIZE - 1] = '\0';

        return 1;
    }

    strcat(dest->buffer, src);
    dest->length += src_len;

    return 0;
}

int main()
{

    TextBuffer dest = {.length = 6, .buffer = "Hello "};

    const char *src = "world";

    smart_append(&dest, src);

    printf("Smart append result - length: %zu ,buffer: %s \n", dest.length, dest.buffer);

    return 0;
}