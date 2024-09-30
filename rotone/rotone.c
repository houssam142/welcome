#include <unistd.h>
int main(int ac, char **av)
{
	int x = 0;
	if (ac == 2)
	{
		while (av[1][x])
		{
			if (av[1][x] >= 'a' && av[1][x] <= 'z' || av[1][x] >= 'A' && av[1][x] <= 'Z')
			{
				av[1][x] += 1;
			}
			write(1, &av[1][x], 1);
			x++;
		}
	
	}
	write(1, "\n", 1);
}
