int count_alen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == 'a')
		{
			return (i);
		}
		i++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	char str[] = "houssmogf";
	printf("%d", count_alen(str));
}
