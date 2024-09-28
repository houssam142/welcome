#include <unistd.h>
int main(int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			while (av[1][i] == '\0')
			{
				break;
			}
			if (av[1][i] >= 'a' && av[1][i] <= 'z' || av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				write(1, &av[1][i], 1);
			}
			if (av[1][i + 1] != '\0')
			{
				write(1, "   ", 3);
			}
			i++;

		}
	}
	write(1, "\n", 1);
}
