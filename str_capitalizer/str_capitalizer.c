#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				if (av[j][i] >= 'A' && av[j][i] <= 'Z')
				{
					av[j][i] += 32;
				}
				if (av[j][0] >= 'a' && av[j][0] <= 'z')
				{
					av[j][0] -= 32;
				}
				if (av[j][i - 1] == 32 || (av[j][i - 1] >= 9 && av[j][i - 1] <= 15))
				{
					if (av[j][i] >= 'a' && av[j][i] <= 'z')
					{
						av[j][i] -= 32;
					}
				}
				write(1, &av[j][i], 1);
				i++;
			}
			write(1, "\n", 1);
			j++;
		}
	}
	write(1, "\n", 1);
}
