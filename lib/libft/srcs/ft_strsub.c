/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 10:48:16 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:12 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	str = NULL;
	if (s)
	{
		if (!(str = ft_strnew(len)))
			return (NULL);
		while ((char)s[start] && i < len)
			str[i++] = (char)s[start++];
		str[len] = '\0';
	}
	return (str);
}
