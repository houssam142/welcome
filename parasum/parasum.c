#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **av)
{
	if (argc > 1)
	{
		int argument_count = argc - 1;
		ft_putchar(argument_count + '0');
		write(1, &av[1], 0);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
	}
}

