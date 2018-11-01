#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char* str)
{
	int i;

	i = -1;
	while (str[++i] != '\0')
		ft_putchar(str[i]);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	while (++i != ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}
	return (0);
}
