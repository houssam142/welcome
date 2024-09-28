#include <unistd.h>
#include <stdlib.h>

int add_prime_sum(int sum)
{
	
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		while (av[1][i])
		{
			write(1, &av[1][i], 1);
			i++;
		}
		return 0;
	}
	write(1, "0\n", 2);
}
