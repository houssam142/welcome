char	*ft_strncat(char *dest, char *src, int nb)
{
	int i = 0;
	int j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i++] = src[j];
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
int main()
{
	char dest[] = "I want ";
	char src[] = "something!";
	printf("%s", ft_strncat(dest, src, 3));
}
*/
