#include "ft_strcspn.h"
size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t count = 0;
	while (s[count] != '\0')
	{
		size_t j = 0;
		while (reject[j] != '\0')
		{
			if (s[count] == reject[j])
			{
				return (count);
			}
			j++;
		}
		count++;
	}
	return (count);
}

int main()
{
	const char str[] = "Hello@kWorld!";
	const char dec[] = "k";
	printf("%ld\n", ft_strcspn(str, dec));
	printf("%ld", strcspn(str, dec));
}
