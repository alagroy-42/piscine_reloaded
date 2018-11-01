/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagroy- <alagroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:47:26 by alagroy-          #+#    #+#             */
/*   Updated: 2018/10/29 15:47:58 by alagroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *file)
{
	int	 fd;
	char	*buf[BUFFER_SIZE];
	int	 ret;

	fd = open(file, O_RDONLY);
	while ((ret = read(fd, buf, BUFFER_SIZE)))
		write(1, buf, ret);
	close(fd);
}

void	ft_putstr(char *str)
{
	int i;

	i = -1;
	while (str[++i])
		write(1, str + i, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_display_file(av[1]);
	else
		ft_putstr("Too many arguments.\n");
	return (0);
}
