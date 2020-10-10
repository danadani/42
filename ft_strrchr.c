#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c)
{
	char *str;
	char *tmp;

	str = (char *)s;
	while (*str != '\0')
	{
		if (*str == c)
			tmp = str;
		str++;
	}
	return (tmp);
}

int main() 
{
	char str[] = "This is a sample string";
  	char* pch;
  	printf("Looking for the 's' character in \"%s\"...\n", str);

  	pch = strrchr(str, 's');
	printf("found at %ld\n", pch - str + 1);
	printf("---------------------\n");

	char str2[] = "This is a sample string";
  	char* pch2;
  	printf("Looking for the 's' character in \"%s\"...\n", str2);

  	pch2 = ft_strrchr(str, 's');
	printf("found at %ld\n", pch2 - str + 1);

   	return 0;
}