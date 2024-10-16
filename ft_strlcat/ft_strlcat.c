unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int src_len = 0;
	unsigned int dest_len = 0;

	while (dest[dest_len] != '\0' && dest_len < size)
	{
		dest_len++;
	}

	while (src[src_len] != '\0')
	{
		src_len++;
	}

	if (size <= dest_len)
	{
		return (size + src_len);
	}
	unsigned int to_copy = size - dest_len - 1;

	if (to_copy > src_len)
	{
		 to_copy = src_len;
	}
	while (i < to_copy)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + to_copy] = '\0';
	return (dest_len + src_len);
}

#include <stdio.h>
int main()
{
	char dest[20] = " Hello";
	const char src[] = " World!";
	unsigned int size = sizeof(dest);
	unsigned int res = ft_strlcat(dest, src, size);

	printf("%d\n", size);
	printf("%d\n", res);
	printf("%s", dest);
}
