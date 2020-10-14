#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memset(void *dest, int c, size_t len)
{
	unsigned char *ptr;
	int i;

	i = 0;
	ptr = (unsigned char *)dest;
	while (len > 0)
	{
		ptr[i++] = (unsigned char)c;
		len--;
	}
	return(ptr);
}

int main() 
{
  char str[] = "almost every programmer should know memset!";
  char str2[] = "almost every programmer should know memset!";
  memset(str, '-', 6);
  ft_memset(str2, '*', 6);
  puts(str);
  printf("%s\n", str2);
  return 0;
}