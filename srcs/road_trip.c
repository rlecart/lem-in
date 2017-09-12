/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   road_trip.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 19:19:08 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/12 14:03:46 by pbernier         ###   ########.fr       */
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

t_room	*can_move(t_lem *l, t_ant *ant)
{
	int		i;

	i = 0;
	if (!ant->room || ant->room == l->end)
		return (NULL);
	while (ant->room->link[i])
	{
		if ((ant->room->pond == ant->room->link[i]->pond + 1 &&
			ant->room->link[i]->empty == EMP) || ant->room->link[i] == l->end)
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
	t_room	*tmp;

	i = 0;
	while (ant_left(l, l->ant))
	{
		if (i != l->nb_ant)
			tmp = can_move(l, &l->ant[i]);
		if (i == l->nb_ant || (!tmp && l->ant[i].room == l->start))
		{
			i = 0;
			ft_putchar('\n');
		}
		else
		{
			if ((tmp))
			{
				l->ant[i].room = tmp;
				ft_putchar('L');
				ft_putnbr(l->ant[i].name);
				ft_putchar('-');
				ft_putstr(l->ant[i].room->name);
				ft_putchar(' ');
			}
			i++;
		}
	}
}
