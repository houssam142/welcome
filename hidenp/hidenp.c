#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	if (ac == 3)
	{
		while (av[2][j])
		{
			while (av[1][i] != '\0' && av[1][i] == av[2][j])
			{
				if (av[1][i] != av[2][j] && av[1][i] == '\0' && av[2][j] == '\0')
				{
					return (0);
				}
				i++;
			}
			j++;
		}
		return (1);
	}
	write(1, "\n", 1);
}

