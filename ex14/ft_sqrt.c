/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagroy- <alagroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:34:46 by alagroy-          #+#    #+#             */
/*   Updated: 2018/10/29 15:34:48 by alagroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_sqrt(int nb)
{
	int i;
	int tmp;

	tmp = nb / 2;
	i = -1;
	if (nb == 1)
		return (1);
	while (++i <= tmp)
		if (i * i == nb)
			return (i);
	return (0);
}
