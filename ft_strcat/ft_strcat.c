char *ft_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	while (dest[j])
	{
		j++;
	}
	while (src[i])
	{
		dest[j++] = src[i];
		i++;

	}
	dest[j] = '\0';
	return (dest);
}
#include <stdio.h>
int main()
{
	char src[] = "I want something else entirely";
	char dest[] = "";
	printf("%s", ft_strcat(dest, src));
}
