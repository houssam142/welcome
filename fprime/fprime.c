#include <stdio.h>
#include <stdlib.h>
void fprime(char *c)
{
	unsigned int nb = atoi(c);
	unsigned int i = 3;
	if (nb == 1)
	{
		printf("%d", nb);
	}
	while (nb % 2 == 0)
	{
		printf("%d", 2);
		nb /= 2;
	}
	while (i * i <= nb)
	{
		while (nb % i == 0)
		{
			printf("%d*", i);
			nb /= i;
		}
		i += 2;
	}
	if (nb > 2)
	{
		printf("%d", nb);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		fprime(av[1]);	
	}
	printf("%s", "\n");
}
