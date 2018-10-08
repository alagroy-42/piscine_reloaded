#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_alphabet(void)
{
    char c;

    c = 96;
    while (++c != '}')
        ft_putchar(c);
}
