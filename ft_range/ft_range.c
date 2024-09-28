#include <stdlib.h>

int     *ft_range(int start, int end)
{
        int     *str;
        int     i;
        int     size;

	if (start <= end)
	{
		size = end - start + 1;
	}
	else if (start > end)
	{
		size = start - end + 1;
	}
	i = 0;
        str = (int *)malloc(size * sizeof(int));
        while (start < end)
        {
                str[i] = start;
                start++;
                i++;
        }
	while (start >= end)
	{
		str[i] = start;
		start--;
		i++;
	}
        return (str);
}
#include <stdio.h>
int main()
{
        int start = 0;
        int i = 0;
        int end = -10;
        int size;
	if (start <= end)
        {
                size = end - start + 1;
        }
	else if (start >= end)
        {
                size = start - end + 1;
        }
        int *str = ft_range(start, end);
        while (i < size)
        {
                printf("%d ", str[i]);
                i++;
        }
	return (0);
}
