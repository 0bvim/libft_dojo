#include <string.h>
#include <unistd.h>

void ft_putstr(char *s)
{
  write (1, s, strlen(s));
}
