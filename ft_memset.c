#include "libft.h"

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
