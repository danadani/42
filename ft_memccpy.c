#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dst, const void *src, int c, size_t n)
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
		if (sorc[i] == (unsigned char)c)
			return(dst + i + 1);
		n--;
		i++;
	}
	return (0);
}

int main()
{
	char *s = "Hello World ! !";
	char d[100] = "ABCDEFGHIJKMLNOPQRSTUVWXYZ";
	char *p = memccpy(d, s, 'W', strlen(s));
	printf("%s\n", p);
	printf("%s\n", d);
	printf("---------------\n");
	char *s2 = "Hello World ! !";
	char d2[100] = "ABCDEFGHIJKMLNOPQRSTUVWXYZ";
	char *p2 = ft_memccpy(d2, s2, 'W', strlen(s2));
	printf("%s\n", p2);
	printf("%s\n", d2);
	return 0;
}