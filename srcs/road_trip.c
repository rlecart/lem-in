/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   road_trip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:19:08 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/11 20:19:52 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		ant_left(t_lem *l, t_ant *ant)
{
	int		i;

	i = -1;
	while (++i < l->nb_ant)
		if (ant[i]->room != l->end)
			return (1);
	return (0);
}

t_room	*can_move(t_lem *l, t_ant *ant)
{
	int		i;

	i = 0;
	while (ant->room->link[i])
	{
		if (ant->room->pond == ant->room->link[i]->pond - 1 &&
			ant->room->empty)
		{
			if (ant->room != l->start)
				ant->room->empty = EMP;
			ant->room->link[i]->empty = OCC;
			return (ant->room->link[i]);
		}
		i++;
	}
	return (NULL);
}

void	road_trip(t_lem *l)
{
	int		i;

	i = 0;
	while (ant_left(l, l->ant))
	{

		i++;
		if (!(l->ant[i]->room = can_move(l, l->ant) && l->ant[i]->room == l->start)) //faire un tmp
		{
			i = 0;
			ft_putchar('\n');
		}
	}
}
