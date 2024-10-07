#include <unistd.h>
int ft_strlen(char **str)
{
	int i = 0;
	while (str[1][i])
	{
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int l = ft_strlen(av);
		while (i < l)
		{
			write(1, &av[1][l - 1], 1);
			l--;
		}	
	}
	write(1, "\n", 1);
}
