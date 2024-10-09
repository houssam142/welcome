#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_atoi(char *str)
{
        int i = 0;
        int sign = 1;
        int res = 0;
        while (str[i])
        {
                while (str[i] == 32 || str[i] == '\t')
                {
                        i++;
                }
                while (str[i] == '-' || str[i] == '+')
                {
                        if (str[i] == '-')
                        {
                                sign *= -1;
                        }
                        if (str[i - 1] == '-' || str[i - 1] == '+')
                        {
                                sign = 0;
                        }
                        i++;
                }
                if (str[i] >= '0' && str[i] <= '9')
                {
                        res = (res * 10) + (str[i] - 48);
                }
                i++;
        }
        return (res * sign);
}

void ft_putnbr(int nb)
{
        long int o = nb;
        if (o > 9)
        {
                ft_putnbr(o / 10);
                ft_putnbr(o % 10);
        }
        if (o >= 0 && o <= 9)
        {
                ft_putchar(o + '0');
        }
}

int tab_mult(char *t)
{
	unsigned int i = ft_atoi(t);
	unsigned int j = 1;
	unsigned int res = 0;
	char k = '*';
	while (j <= 9)
	{
		if (i > 0)
		{
			res = j * i;
			ft_putchar(j + '0');
			write(1, " ", 1);
			ft_putchar('*');
			write(1, " ", 1);
			ft_putchar(i + '0');
			write(1, " ", 1);
			ft_putchar('=');
			write(1, " ", 1);
			ft_putnbr(res);
			write(1, "\n", 1);
		}
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		tab_mult(av[1]);		
	}
	else
	{
		write(1, "\n", 1);
	}
}
