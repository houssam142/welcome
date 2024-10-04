#include <stdlib.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char    *ft_strdup(char *src)
{
	char *copy;
	int i = 0;
	int l = ft_strlen(src) + 1;

	copy = malloc(sizeof(char) * l);
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

#include <stdio.h>
int main(void)
{
	char s[] = "hello world";
	printf("%s", ft_strdup(s));
	return (0);
}
