/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtabnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 17:27:39 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/07 08:14:28 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strtabnew(int x, int y)
{
	int		i;
	char	**str;

	i = 0;
	str = ft_memalloc(sizeof(char*) * (y + 1));
	while (i < y)
		str[i++] = ft_strnew(x);
	str[i] = NULL;
	return (str);
}
