#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	if (c > 9)
	{
		c /= 10;
	}
	c += 48;
       	write(1, &c, 1);
}

int is_prime(int nb)
{
        int i = 2;
        if (nb < 2)
	{
		return 0;
	}
        while (i * i <= nb)
        {
                if (nb % i == 0)
		{
			return 0;
		}
                i++;
        }
        return (1);
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
void ft_putnb(int nb)
{
	long int o = nb;
	if (o > 9)
	{
		ft_putnb(o / 10);	
		ft_putnb(o % 10);
	}
	if (o >= 0 && o <= 9)
	{
		ft_putchar(o);
	}
}

void add_prime_sum(char *sum_str)
{
        int sum = ft_atoi(sum_str);
        int res = 0;
        int i = 2;
        while (i <= sum)
        {
                if (is_prime(i) == 1)
                {
                        res += i;
                }
                i++;
        }
        if (res > 9)
        {
		ft_putnb(res);
	}
	ft_putnb(res);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac == 2)
	{
		add_prime_sum(av[1]);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "0\n", 2);
	}
}
