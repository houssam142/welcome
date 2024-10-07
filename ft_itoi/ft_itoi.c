#include <stdlib.h>
int ft_nbrlen(int n)
{
	int count = 0;
	if (n == 0)
	{
		return 1;
	}
	if (n < 0)
	{
		count++;;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return count;
}

char	*ft_itoa(int nb)
{
	long op = nb;
	int i = ft_nbrlen(op);
	char *r;
	r = malloc(sizeof(char) * i + 1);
	r[i--] = '\0';
	if (op < 0)
	{
		r[0] = '-';
		op *= -1;
	}
	if(op == 0)
    	{
        	r[i] = '0';
    	}
    	while(op != 0)
	{
		r[i] = op % 10 + '0';
		op = op / 10;
		i--;
	}
	return r;
    
}
#include <stdio.h>
int main()
{
	printf("%s", ft_itoa(53));
	return 0;
}
