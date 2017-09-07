/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/01 17:33:44 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/07 08:27:35 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		*ft_intnew(size_t len)
{
	int		*tab;
	size_t	i;

	i = 0;
	tab = ft_memalloc(sizeof(int) * len);
	while (i < len)
		tab[i++] = 0;
	return (tab);
}
