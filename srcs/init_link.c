/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 03:37:58 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 09:30:13 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	link_list(t_room **fst, t_room **sec)
{

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
		link_list(&tmp, &l->room);
}

int		init_links(t_lem *l)
{
	int		len_1;
	int		len_2;

	len_1 = 0;
	len_2 = 0;
	//printf(".[%s]\n", l->p.line);
	add_line(l);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		return (1);
	valid_link(l, l->p.line);
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
	//printf("[%s][%d] - [%s][%d]\n", l->p.name_check[0], len_1, l->p.name_check[1], len_2);

	return (0);
}
