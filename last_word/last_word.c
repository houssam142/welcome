#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			i++;
		}
		i--;
		while (i > 0 && (av[1][i - 1] == 32 || av[1][i - 1] == '\t'))
		{
			i--;
		}
		while (i > 0 && (av[1][i - 1] != 32 || av[1][i - 1] == '\t'))
                {
                        i--;
                }
		while (av[1][i] != '\0' && (av[1][i] != 32 || av[1][i] != '\t'))
		{
			if (av[1][i] == 32 || av[1][i] == '\t')
			{
				break;
			}
			write(1, &av[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
}
