#include <unistd.h>
#include <stdio.h>
int main(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int first_word_end = 0;

	if (ac == 2)
	{
		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i++;
		}
		while (av[1][i] != ' ')
		{
			i++;
		}
		first_word_end = i;
		while (av[1][i])
		{
			while (av[1][i] == 32 || av[1][i] == '\t')
			{
				i++;
			}
			if (av[1][i] >= 42 && av[1][i] <= 122)
                        {
                                if (av[1][i + 1] == 32 || av[1][i + 1] == '\t' && av[1][i] != '\0')
                                {
                                        write(1, &av[1][i], 1);
                                        write(1, "", 1);
                                        i++;
				}
                        }
			write(1, &av[1][i], 1);
			i++;
		}
		if (av[1][i - 1] != 32)
		{
			write(1, " ", 1);
		}
		while (j < first_word_end)
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

