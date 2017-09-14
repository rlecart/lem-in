/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/14 19:18:36 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:11 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strreset(char **as, char *reset)
{
	ft_strdel(as);
	*as = ft_strdup(reset);
	ft_strdel(&reset);
}
