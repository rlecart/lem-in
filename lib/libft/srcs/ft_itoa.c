/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 11:25:15 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:00 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_itoa(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		save;
	int		len;
	char	*str;
	int		tmp;

	tmp = 0;
	save = n;
	len = ft_len_itoa(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	str[len--] = '\0';
	while (len >= 0)
	{
		tmp = save % 10;
		if (tmp < 0)
			tmp = -tmp;
		str[len--] = tmp + 48;
		save = save / 10;
	}
	len++;
	if (n < 0)
		str[len] = '-';
	return (str);
}
