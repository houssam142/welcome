#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
        long o = n;
        if (n == -2147483648)
        {
                write(1, "-2147483648", 11);
                return ;
        }
        if (o < 0)
        {
                write(1, "-", 1);
                o *= -1;
        }
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

void	ft_putnbr_base(int nbr, char *base)
{
	int n;
	while (nbr != 0)
	{
		if (base == "01")
		{
			nbr %= 2;
			n = nbr;
		}
		ft_putchar(n + '0');
		nbr /= 2;
	}
}
int main()
{
	char base[] = "01";
	ft_putnbr_base(54, base);
}
