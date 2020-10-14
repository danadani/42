#include "libft.h"
#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	int i;

	i = 0;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == (unsigned char)c)
			return(str + i);
		i++;
		n--;
	}
	return (0);
}
int main() 
{
	char* pch;
	char str[] = "Example string";
	pch = (char*)memchr(str, 'p', strlen(str));

	if (pch != NULL)
	printf("'p' found at position %ld.\n", pch - str + 1);
	else
	printf("'p' not found.\n");
	printf("------------\n");
	char* pch2;
	char str2[] = "Example string";
	pch2 = (char*)memchr(str2, 'p', strlen(str2));

	if (pch2 != NULL)
	printf("'p' found at position %ld.\n", pch2 - str2 + 1);
	else
	printf("'p' not found.\n");
  return 0;
}