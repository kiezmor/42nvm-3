/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 17:21:49 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/18 17:35:20 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] < 32)
			return (0);
		i++;
	}
	return (1);
}
