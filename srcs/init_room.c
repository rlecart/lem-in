/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:04:13 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 09:28:25 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	place_rooms(t_lem *l)
{
	t_room *tmp;

	while ((l->room) && (l->room->next))
		l->room = l->room->next;
	tmp = (!(l->room)) ? l->end : l->room;
	l->start->next = tmp;
	tmp->prev = l->start;
	tmp = (!(l->room)) ? l->start : l->room;
	l->end->prev = tmp;
	tmp->next = l->end;
}

int		init_rooms_struct(t_room **room, t_lem *l, char *line, int len)
{
	t_room	*tmp;

	tmp = NULL;
	add_line(l);
	while ((*room))
	{
		tmp = *room;
		*room = (*room)->next;
	}
	if (!(*room = (t_room *)malloc(sizeof(t_room))))
		error(l, MALLOC);
	if ((tmp))
		tmp->next = *room;
	(*room)->prev = tmp;
	while (line[++len] != ' ')
		;
	if (!((*room)->name = ft_strsub(line, 0, len)))
		error(l, MALLOC);
	(*room)->pond = 0;
	(*room)->nb_link = 0;
	if (!((*room)->link = (t_room **)malloc(sizeof(t_room *))))
		error(l, MALLOC);
	(*room)->link[0] = NULL;
	(*room)->next = NULL;
	return (1);
}

int		init_start(t_lem *l)
{
	ft_memdel((void **)&l->p.line);
	sp_gnl(l, &l->p.line);
	while (l->p.line[0] == '#')
	{
		if (!ft_strcmp(l->p.line, "##start") ||
			!ft_strcmp(l->p.line, "##end"))
			error(l, INFO_START);
		add_line(l);
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	if (!valid_room(l, l->p.line))
		error(l, INFO_START);
	if ((l->start))
		error(l, CONF_START);
	init_rooms_struct(&l->start, l, l->p.line, -1);
	return (1);
}

int		init_end(t_lem *l)
{
	ft_memdel((void **)&l->p.line);
	sp_gnl(l, &l->p.line);
	while (l->p.line[0] == '#')
	{
		if (!ft_strcmp(l->p.line, "##start") ||
			!ft_strcmp(l->p.line, "##end"))
			error(l, INFO_END);
		add_line(l);
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	if (!valid_room(l, l->p.line))
		error(l, INFO_END);
	if ((l->end))
		error(l, CONF_END);
	init_rooms_struct(&l->end, l, l->p.line, -1);
	return (1);
}

int		init_rooms(t_lem *l)
{
	sp_gnl(l, &l->p.line);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		add_line(l);
	if ((l->p.line[0] == '#') && (ft_strncmp(l->p.line, "##", 2)))
		return (1);
	if (!ft_strcmp(l->p.line, "##start"))
		return ((init_start(l)));
	else if (!ft_strcmp(l->p.line, "##end"))
		return ((init_end(l)));
	if ((l->p.line[0] != '#') && (valid_room(l, l->p.line)))
		return (init_rooms_struct(&l->room, l, l->p.line, -1));
	else if (l->p.line[0] != '#')
	{
		(!l->start) ? error(l, MISS_START) : 0;
		(!l->end) ? error(l, MISS_END) : 0;
		place_rooms(l);
		return (0);
	}
	return (1);
}
