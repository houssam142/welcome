#include <stdio.h>
int	max(int *tab, unsigned int len)
{
	int	max;

        if (!len)
	{
		return (0);
	}
	printf("%d\n", len);
	max = tab[--len];
	printf("%d\n", len);
	while (len)
	{
		if (tab[len] > max)
		{
			max = tab[len];
		}
		len--;
	}
        return (max);
}
int main()
{
	int i = 0;
	int str[] = {1, 2, 4, 3, 8};
	printf("%d", max(str, 4));
	//printf("%d", str[i]);
}
