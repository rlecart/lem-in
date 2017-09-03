/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:04:13 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/03 17:24:19 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem-in.h>

void	init_rooms_struct(t_room **room)
{
	//
}

void	init_special_room(t_lem *l)
{
	if (!ft_strcmp(l->p.line, "##start"))
	{
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
		if (!valide_room(l, l->p.line))
			error(l, INFO_START);
		init_rooms_struct(&l->start);
		return (1);
	}
	else if (!ft_strcmp(l->p.line, "##end"))
	{
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
		if (!valide_room(l, l->p.line))
			error(l, INFO_END);
		init_rooms_struct(&l->start);
		return (1);
	}
	return (0);
}

int		init_rooms(t_lem *l)
{
	sp_gnl(l, &l->p.line);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		add_line(l);
	if (init_special_room(l))
		return (1);
	if ((valide_room(l, l->p.line)))
		init_rooms_struct(&l->room);
	else
	{
		(!l->start) ? error(l, MISS_START) : 0;
		(!l->end) ? error(l, MISS_END) : 0;
		//place_rooms()
		ft_memdel((void **)&l->p.line);
		return (0);
	}
	return (1);
}
