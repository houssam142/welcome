int len_char(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i] != '\0')
	{
		while (str[j + i] == 'A' && str[j + i] != '\0')
		{
			j++;
		}
		i++;
	}
	return (j);
}
#include <stdio.h>
int main()
{
	char str[] = "hgAjfAjAdA";
	printf("%d", len_char(str));
}
