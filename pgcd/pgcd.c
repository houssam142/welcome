#include <stdlib.h>
#include <stdio.h>
int pgcd(char *n, char *k)
{
	unsigned int i = atoi(n);
	unsigned int j = atoi(k);
	unsigned int x;
	while (j != 0)
	{
		x = j;
		j = i % j;
		i = x;
	}
	return i;
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		printf("%d", pgcd(av[1], av[2]));	
	}
	printf("%s", "\n");
}
