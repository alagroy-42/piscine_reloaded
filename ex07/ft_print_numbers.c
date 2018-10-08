#include <unistd.h>

void    ft_putchar(char c);

void    ft_print_numbers(void)
{
    char c;
    
    c = '/';
    while (++c != ':')
        ft_putchar(c);
}
