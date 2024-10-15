#include <unistd.h>
void ft_putchar(char c)
{
        write(1, &c, 1);
}

void putnbr(int n)
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
                putnbr(o / 10);
                putnbr(o % 10);
        }
        if (o >= 0 && o <= 9)
        {
                ft_putchar(o + '0');
        }
}

int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		if (i % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			putnbr(i);
		}
		write(1, "\n", 1);
		i++;
	}

}
