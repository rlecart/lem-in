/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:43:17 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/11 12:44:01 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	weighting(t_lem *l, t_room *room)
{
	(void)l;
	(void)room;
	// static int	pond = 0;
	//
	// while (l->end->nb_link != 0)
	// {
	// 	printf("{[%s]} [%d]\n", room->name, room->nb_link);
	// 	while ((room->nb_link > 1 || (room->nb_link > 0 && room == l->end)) && room != l->start)
	// 	{
	// 		room->pond = pond++;
	// 		printf("{[%s]} [%d] -> {[%s]}\n", room->name, room->pond, room->link[room->nb_link - 1]->name);
	// 		room = room->link[--room->nb_link];
	// 		//printf("{[%s]} [%d]\n", room->name, room->pond);
	// 	}
	// 	room = l->end;
	// 	//while(1);
	//
	// }

	//printf("{[%s]} [%d]\n", room->name, room->pond);
}


// //static int	pond = 0;
// (void)l;
//
// while ((room->nb_link > 1 ||
// 	(room->nb_link > 0 && room == l->end)) &&
// 	 room != l->start)
// {
// 	//printf("[%s]\n", room->name);
// 	weighting(l, room->link[--room->nb_link]);
// }
// //if (room != l->start)
//
// //else
//
//
// printf("{[%s]} [%d]\n", room->name, room->nb_link);;
// //printf("po[%d]\n", room->pond);
