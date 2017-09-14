/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 08:39:11 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:11 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t		i;
	char		*new_str;

	i = 0;
	if (!(new_str = ft_memalloc(size + 1)))
		return (NULL);
	while (i < size)
		new_str[i++] = '\0';
	return (new_str);
}
