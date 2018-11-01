/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alagroy- <alagroy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:41:23 by alagroy-          #+#    #+#             */
/*   Updated: 2018/10/29 15:41:41 by alagroy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
	int size;
	int *rtrn;
	int i;

	i = -1;
	size = max - min;
	if (size <= 0)
		return (NULL);
	if (!(rtrn = (int *) malloc(size * sizeof(int))))
		return (NULL);
	while (i < size)
		rtrn[i] = min + i;
	return (rtrn);
}
