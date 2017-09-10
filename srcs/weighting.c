/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:43:17 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/10 20:02:20 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	weighting(t_room *room)
{
	//static int pond;

	if ((room->nb_link) && room->link[room->nb_link])
	printf("[%s]\n", room->name);
	printf("lk[%d] | ", room->nb_link);
	printf("po[%d]\n", room->pond);
}
