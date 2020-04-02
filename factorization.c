#include <stdio.h>

int		argc_error(int argc)
{
	if (argc == 1)
	{
		printf("No input data.\n");
		return (0);
	}
	else if (argc > 2)
	{
		printf("Too many factors.\n");
		return (0);
	}
	else
		return (1);
}

unsigned int atoui(char *argv[])
{
	unsigned int	num;
	int				i;

	i = 0;
	num = 0;
	while (argv[1][i] != '\0')
	{
		if(argv[1][i] > '9' || argv[1][i] < '0')
		{
			printf("Not a validate number.\n");
			return (0);
		}
		num = (num * 10) + (argv[1][i] - '0');
		i++;
	}
	if (!(num >= 2 && num <= 4294967295))
	{
		printf("Out of range.\n");
		return (0);
	}
	else
		return (num);
}
void	print_factors(unsigned int num)
{
	unsigned int	p_factor;
	unsigned int	tmp;

	p_factor = 2;
	tmp = 0;
	while (num > 0)
	{
		if (num % p_factor == 0)
		{
			if (tmp != p_factor)
			{
				printf("%d ", p_factor);
				tmp = p_factor;
			}
			num /= p_factor;
		}
		else
		{
			if (num < p_factor)
				num /= p_factor;
			p_factor++;
		}
	}
}

int		main(int argc, char *argv[])
{
	unsigned int	num;

	if (!argc_error(argc))
		return (0);
	num = atoui(argv);
	if (!num)
		return (0);
	print_factors(num);
	printf("\n");
	return (0);
}