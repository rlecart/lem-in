/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:12 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:22:13 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	clean_print(t_print *p)
{
	ft_memdel((void**)&p->line);
	ft_memdel((void**)&p->map);
	ft_memdel((void**)&p->name_check);
}

void	clean_ant(t_ant **a)
{
	ft_memdel((void**)a);
}

void	clean_room(t_room **r)
{
	while (r && *r && (*r)->prev)
		*r = (*r)->prev;
	while (r && *r)
	{
		ft_memdel((void**)&(*r)->link);
		*r = (*r)->next;
	}
	ft_memdel((void**)r);
}

void	clean_all(t_lem *l)
{
	clean_print(&l->p);
	clean_ant(&l->ant);
	clean_room(&l->room);
	clean_room(&l->start);
	clean_room(&l->end);
}
