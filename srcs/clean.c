/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:12 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 01:45:32 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	clean_print(t_print *p)
{
	//si ils existent
	ft_memdel((void **)&p->line);
	ft_memdel((void **)&p->map);
}

void	clean_room(t_room *room)
{
	int	i;

	i = -1;
	if (!(room))
		return ;
	ft_memdel((void **)&room->name);
	ft_memdel((void **)&room->ant);
	while ((room->link[++i]))
		ft_memdel((void **)&room->link[i]);
	ft_memdel((void **)&room->link);

	//if ((room->prev))
		//ft_memdel((void **)&room->prev->next);
	ft_memdel((void **)&room->prev);
	if ((room->next))
		clean_room(room->next);
	else
		ft_memdel((void **)&room);
}
