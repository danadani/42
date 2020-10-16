#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *ptr;
	int i;

	i = 0; 
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		ptr[i++] = 0x00;
		n--;
	}
}
