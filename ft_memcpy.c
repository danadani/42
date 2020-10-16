#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dest;
	unsigned char *sorc;
	int i;

	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	i = 0;
	while (n > 0)
	{
		dest[i] = sorc[i];
		i++;
		n--;
	}
	return (dst);
}
