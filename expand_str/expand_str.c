#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] == 32 || av[1][i] == '\t')
		{
			i++;
		}
		while (av[1][i])
		{
			while ((av[1][i] == 32 || av[1][i] == '\t') && av[1][i + 1] != '\0')
			{
				if (av[1][i - 1] >= 'a' && av[1][i - 1] <= 'z' || av[1][i - 1] >= 'A' && av[1][i - 1] <= 'Z' && (av[1][i + 1] != 32  || av[1][i + 1] != '\t'))
				{
					write(1, "   ", 3);
				}
				i++;
			}
			if (av[1][i + 1] == '\0')
                        {
                                if (av[1][i - 1] == 32 || av[1][i - 1] == '\t')
                                {
                                        break;
                                }
				write(1, &av[1][i], 1);
				break;
                        }
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
