#include "do_op.h"
#include <stdlib.h>

void calculus(char *nb1, char *nb2, char *sep)
{
	int nb3 = atoi(nb1);
	int nb4 = atoi(nb2);
	int res;
	if (sep[0] == '-')
	{
		res = nb3 - nb4;
	}
	else if (sep[0] == '+')
	{		
		res = nb3 + nb4;
	}
	else if (sep[0] == '*')
	{
		res = nb3 * nb4;
	}
	else if (sep[0] == '/')
	{
		res = nb3 / nb4;
	}
	else if (sep[0] == '%')
	{
		res = nb3 % nb4;
	}
	if (res > 9)
	{
		putnbr(res);
	}
	else if (res < 0)
	{
		putnbr(res);
	}
	else if (res >= 0 && res <= 9)
	{
		ft_putchar(res + '0');
	}

}

int main(int ac, char **av)
{
	int i = 0;
	if (ac == 4)
	{
		calculus(av[1], av[3], av[2]);
	}
	write(1, "\n", 1);
}
