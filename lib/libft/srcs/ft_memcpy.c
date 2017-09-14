/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:58:26 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:01 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_cpy;
	unsigned char	*src_cpy;

	src_cpy = (unsigned char*)src;
	dst_cpy = (unsigned char*)dst;
	while (n-- > 0)
		*dst_cpy++ = *src_cpy++;
	return (dst);
}
