/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_room.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/03 17:04:13 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/03 22:52:55 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	init_rooms_struct(t_room **room, t_lem *l, char *line)
{
	int		len;
	t_room	*tmp;

	len = -1;
	tmp = NULL;
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
	(*room)->ant = NULL;
	if (!((*room)->link = (t_room **)malloc(sizeof(t_room *))))
		error(l, MALLOC);
	(*room)->link[0] = NULL;
	(*room)->next = NULL;
}

void	init_start(t_lem *l)
{
	ft_memdel((void **)&l->p.line);
	sp_gnl(l, &l->p.line);
	add_line(l);
	while (l->p.line[0] == '#')
	{
		add_line(l);
		if (!ft_strcmp(l->p.line, "##start") ||
			!ft_strcmp(l->p.line, "##end"))
			error(l, INFO_START);
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	if (!valide_room(l, l->p.line))
		error(l, INFO_START);
	if ((l->start))
		error(l, CONF_START);
	init_rooms_struct(&l->start, l, l->p.line);
}

void	init_end(t_lem *l)
{
	ft_memdel((void **)&l->p.line);
	sp_gnl(l, &l->p.line);
	add_line(l);
	while (l->p.line[0] == '#')
	{
		add_line(l);
		if (!ft_strcmp(l->p.line, "##start") ||
			!ft_strcmp(l->p.line, "##end"))
			error(l, INFO_END);
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	if (!valide_room(l, l->p.line))
		error(l, INFO_END);
	if ((l->end))
		error(l, CONF_END);
	init_rooms_struct(&l->end, l, l->p.line);
}

int		init_rooms(t_lem *l)
{
	sp_gnl(l, &l->p.line);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		add_line(l);
	if (!ft_strcmp(l->p.line, "##start"))
	{
		init_start(l);
		return (1);
	}
	if (!ft_strcmp(l->p.line, "##start"))
	{
		init_end(l);
		return (1);
	}
	if ((valide_room(l, l->p.line)))
		init_rooms_struct(&l->room, l, l->p.line);
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
