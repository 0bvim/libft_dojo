#include <string.h>
#include <unistd.h>

/**
 * This function writes a string.
 **/
void ft_putstr(char *s)
{
  write (1, s, strlen(s));
}
