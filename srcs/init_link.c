/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 03:37:58 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:22:13 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	realloc_link(t_lem *l, t_room **room, t_room **obj)
{
	int			i;
	t_room		**list;
	static int	sw = -1;

	i = -1;
	++sw;
	if (!ft_strcmp((*room)->name, (*obj)->name))
		error(l, LINK);
	if (!(list = (t_room **)malloc(sizeof(t_room *) * ((*room)->nb_link + 2))))
		error(l, MALLOC);
	list[(*room)->nb_link + 1] = NULL;
	++(*room)->nb_link;
	list[0] = *obj;
	while (((*room)->link[++i]))
		list[i + 1] = (*room)->link[i];
	ft_memdel((void **)&(*room)->link);
	(*room)->link = list;
	if (!(sw))
		realloc_link(l, obj, room);
	sw = -1;
}

void	set_link(t_lem *l, char *name_check, int sw)
{
	static t_room	*tmp = NULL;

	l->room = l->start;
	while ((l->room) && ft_strcmp(name_check, l->room->name))
		l->room = l->room->next;
	(!l->room) ? error(l, LINK_NAME) : 0;
	if (sw == 1)
		tmp = l->room;
	if (sw == 2)
		realloc_link(l, &tmp, &l->room);
}

int		init_links(t_lem *l)
{
	int		len_1;
	int		len_2;

	len_1 = 0;
	len_2 = 0;
	add_line(l);
	if (!l->p.line[0])
		return (0);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		return (1);
	if (!(valide_link(l, l->p.line)))
		return (0);
	while ((l->p.line[len_1] != '-'))
		++len_1;
	l->p.name_check = ft_strsub(l->p.line, 0, len_1);
	set_link(l, l->p.name_check, 1);
	ft_memdel((void **)&l->p.name_check);
	len_2 = ++len_1;
	while ((l->p.line[len_2]))
		++len_2;
	len_2 -= len_1;
	l->p.name_check = ft_strsub(l->p.line, len_1, len_2);
	set_link(l, l->p.name_check, 2);
	ft_memdel((void **)&l->p.name_check);
	return (1);
}
