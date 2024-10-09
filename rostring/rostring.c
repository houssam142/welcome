#include <unistd.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			while (av[1][i] == 32 || av[1][i] == '\t')
                        {
				i++;
                        }
			if (av[1][i] >= 42 && av[1][i] <= 122)
			{
				if (av[1][i + 1] == 32 || av[1][i + 1] == '\t')
				{
					write(1, &av[1][i], 1);
					write(1, "", 1);
					i++;
				}
			}
			write(1, &av[1][i], 1);
                        i++;
		}
			if (av[1][i - 1] == '\0')
			{
				i = 0;
				while (av[1][i])
				{
					while (av[1][i] != 32 || av[1][i] != '\t')
					{
						write(1, &av[1][i], 1);
						i++;
					}
					i++;
					break;
				}
			}
	}
	write(1, "\n", 1);
}
