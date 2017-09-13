/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   road_trip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:19:08 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 17:45:24 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		ant_left(t_lem *l, t_ant *ant)
{
	int		i;

	i = -1;
	while (++i < l->nb_ant)
		if (ant[i].room != l->end)
			return (1);
	return (0);
}

int		valide_path(t_lem *l, t_room *room, t_ant *ant)
{
	int		i;

	i = -1;
	if (room->empty == OCC || ant->room != l->start ||
		((l->nb_ant - ant->name) <= ((room->pond + 1) / ant->room->pond)))
		return (0);
	while (room->link[++i])
		if (room->link[i]->pond < room->pond && room->link[i] != ant->room)
			return (1);
	return (0);
}

t_room	*can_move(t_lem *l, t_ant *ant)
{
	int		i;

	i = 0;
	if (!ant->room || ant->room == l->end)
		return (NULL);
	while (ant->room->link[i])
	{
		if ((ant->room->pond == ant->room->link[i]->pond + 1 &&
			ant->room->link[i]->empty == EMP) || ant->room->link[i] == l->end ||
			valide_path(l, ant->room->link[i], ant))
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

void	change_room(t_lem *l, t_road *r, t_room *tmp)
{
	l->ant[r->i].room = tmp;
	(r->sw == 1) ? ft_putchar(' ') : 0;
	r->sw = 1;
	display(l, l->ant[r->i].room->pond,
		l->ant[r->i].name, l->ant[r->i].room->name);
}

void	road_trip(t_lem *l, t_road *r)
{
	t_room	*tmp;

	while (ant_left(l, l->ant))
	{
		if (r->i != l->nb_ant)
			tmp = can_move(l, &l->ant[r->i]);
		if (r->i == l->nb_ant || (!tmp && l->ant[r->i].room == l->start))
		{
			r->i = 0;
			r->sw = 0;
			ft_putchar('\n');
		}
		else
		{
			if ((tmp))
				change_room(l, r, tmp);
			++r->i;
		}
	}
	ft_putchar('\n');
}
