/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 06:07:26 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:07 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int		i;

	i = 0;
	while (i <= 46340 && nb >= 0)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
