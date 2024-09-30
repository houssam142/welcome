#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char **str)
{
        int i = 0;
        while (str[1][i])
        {
                i++;
        }
        return (i);
}

char *ft_strdup(char **s)
{
	char *str;
	int i = 0;

	str = (char *)malloc(sizeof(char) * ft_strlen(s));
	while (s[1][i])
	{
		str[i] = **s;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	int i = 0;
	if (ac >= 2)
	{
		while (av[1][i])
		{
			i++;
		}
		while (av[1][i] != '\0' && (av[1][i] != 32 || av[1][i] != '\t'))
		{
			i--;
		}
		while (av[1][i] == 32 || av[1][i] == '\t')
		{
			if ((av[1][i + 1] >= 'a' && av[1][i + 1] <= 'z') 
				|| (av[1][i + 1] >= 'A' && av[1][i + 1] <= 'Z')
				|| (av[1][i + 1] >= '0' && av[1][i + 1] <= '9'))
			{
				write(1, &av[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
