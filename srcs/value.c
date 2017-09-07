/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   value.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 14:50:52 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 01:05:23 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		valide_nbr(char *line)
{
	int	i;

	i = (line[0] == '-') ? 1 : 0;
	while (line[i] >= '0' && line[i] <= '9')
		++i;
	if ((line[i]) || (line[0] == '-' && !line[1]))
		return (0);
	return (1);
}

int		valide_room(t_lem *l, char *line)
{
	int	i;
	int	nb_size;

	i = 0;
	nb_size = 0;
	if (line[i] && (line[i] == 'L'))
		error(l, NAME_ROOM);
	while (line[i] && line[i] != ' ')
		if (line[i++] == '-')
			return (0);
	(line[i]) ? ++i : error(l, COOR_ROOM);
	nb_size = i;
	while (line[nb_size] >= '0' && line[nb_size] <= '9')
		++nb_size;
	if (nb_size == i || line[nb_size] != ' ')
		error(l, COOR_ROOM);
	i = ++nb_size;
	while (line[nb_size] >= '0' && line[nb_size] <= '9')
		++nb_size;
	if (nb_size == i || (line[nb_size]))
		error(l, COOR_ROOM);
	return (1);
}