#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	char *str;
	
	str = (char *)s;
	while(*str != c)
	{
		if(*str == '\0')
			return (0);
		str++;
	}
	return (str);
}

int main() 
{
	char str[] = "This is a sample string";
  	char* pch;
  	printf("Looking for the 's' character in \"%s\"...\n", str);

  	pch = strchr(str, 's');

  	while (pch != NULL) 
	{
    	printf("found at %ld\n", pch - str + 1);
		printf("pch : %s\n", pch);
   		pch = strchr(pch + 1, 's');	
  	}
	printf("---------------------\n");
	char str2[] = "This is a sample string";
  	char* pch2;
  	printf("Looking for the 's' character in \"%s\"...\n", str2);

  	pch2 = ft_strchr(str2, 's');

  	while (pch2 != NULL) 
	{
    	printf("found at %ld\n", pch2 - str2 + 1);
   		pch2 = ft_strchr(pch2 + 1, 's');
  	}
	return 0;
}