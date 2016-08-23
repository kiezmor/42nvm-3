/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 03:56:00 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/23 19:24:55 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		v;

	if (min >= max)
		*range = NULL;
	if (min >= max)
		return (0);
	v = min;
	while (v < max)
		v++;
	tab = (int*)malloc(sizeof(int) * (v));
	if (tab == NULL)
		*range = NULL;
	if (tab == NULL)
		return (0);
	v = 0;
	while (min < max)
	{
		tab[v] = min;
		min++;
		v++;
	}
	*range = tab;
	return (v);
}
