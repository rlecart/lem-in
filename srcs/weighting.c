/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:43:17 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/10 20:16:35 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		weighting(t_lem *l, t_room *room)
{
	static int 		pond = 0;
	//static *t_room	branch = NULL;;

	while (room != l->start && room->nb_link)
	{
		if (room->pond == -1 || room->pond > pond)
			room->pond = pond++;
		room = room->link[--room->nb_link];
	}
	//while (!room->nb_link || room == l->start)
		//room = room->link[room->nb_link + 1];

	printf("[%s]\n", room->name);
	printf("lk[%d] | ", room->nb_link);
	printf("po[%d]\n", room->pond);
	room->nb_link = 0;
	return (0);
}
