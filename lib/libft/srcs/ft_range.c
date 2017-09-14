/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 06:14:02 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:06 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int		i;
	int		*tab;
	int		strlen;

	i = 0;
	strlen = max - min;
	if (min >= max)
		return (0);
	if (!(tab = (int*)malloc(sizeof(int*) * strlen)))
		return (0);
	while (min != max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
