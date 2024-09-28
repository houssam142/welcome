#include <stdlib.h>
int     *ft_rrange(int start, int end)
{
	int *str;
	int i = 0;
	int size;
	if (start <= end)
        {
                size = end - start + 1;
        }
        else if (start >= end)
        {
                size = start - end + 1;
        }
	str = (int *)malloc(sizeof(int) * size);
	while (i <= size)
	{
		while (start <= end)
		{
			str[i] = end;
			end--;
			i++;
		}
		while (start > end)
		{
			str[i] = end;
			end++;
			i++;
		}
	}
	return (str);
}
#include <stdio.h>
int main()
{
	int start = 0;
	int end = -3;
	int i = 0;
	int *str = ft_rrange(start, end);
	int size;
	if (start <= end)
        {
                size = end - start + 1;
        }
        else if (start >= end)
        {
                size = start - end + 1;
        }
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}
	return (0);
}
