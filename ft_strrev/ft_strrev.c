#include <stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
	{
		i++;
	}
	return i;
}

char    *ft_strrev(char *str)
{
	int len = ft_strlen(str) - 1;
	printf("%d\n", len);
	int j = 0;
	char tmp;
	while (len > j)
	{
		tmp = str[len];
		str[len] = str[j];
		str[j] = tmp;
		len--;
		j++;
	}
	return (str);
}

int main()
{
	char str[] = "hello world";
	printf("%s", ft_strrev(str));
}
