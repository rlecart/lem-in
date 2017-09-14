/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 13:25:18 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:22:59 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen_base(int nbr, int base)
{
	int	len;

	len = 1;
	if (nbr < 0 && base == 10)
		len = 2;
	while ((nbr /= base))
		len++;
	return (len);
}
