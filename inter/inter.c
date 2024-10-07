#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int str[256];
	if (ac == 3)
	{
			while (av[1][i])
			{
				if (av[1][i] == av[2][j] && av[2][j] != '\0')
				{
					write(1, &av[1][i], 1);
					str[j] = 1;
					j++;
				}
				i++;
			}
	}
	write(1, "\n", 1);
	printf("%d", str[255]);
}
