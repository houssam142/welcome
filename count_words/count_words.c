int count_words(char *str)
{
	int i = 0;
	int count = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 15))
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z'
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
			{
				count++;
			}
		}
		else if (str[i + 1] == '\0')
		{
			count++;
		}
		i++;
	}
	return (count);
}
#include <stdio.h>
int main()
{
	char str[] = "hellp		f g";
	printf("%d", count_words(str));
}
