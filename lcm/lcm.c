#include <stdio.h>
unsigned int	gcd(unsigned int a, unsigned int b)
{
	unsigned int x;
	while (b != 0)
        {
		x = b;
		b = a % b;
		a = x;
	}
	return a;
}
unsigned int	lcm(unsigned int a, unsigned int b)
{
	return ((a * b) / gcd(a, b));
}

int  main()
{
	printf("%d", lcm(42, 14));
}
