/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpluchar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 12:32:45 by vpluchar          #+#    #+#             */
/*   Updated: 2016/08/18 19:18:08 by vpluchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	while(*str)
	{
		if(*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}
