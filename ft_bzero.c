#include <stdlib.h>

void ft_bzero(void *memory, size_t n)
{
    char *copy;

    copy = (char*)memory;
    for (size_t i = 0; i < n; i++)
        copy[i] = 0;
}