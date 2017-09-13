/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:06 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 14:53:37 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	set_all(t_lem *l)
{
	l->p.line = NULL;
	l->p.map = ft_strnew(0);
	l->p.name_check = NULL;
	l->start = NULL;
	l->room = NULL;
	l->end = NULL;
	l->ant = NULL;
	l->road.i = 0;
	l->road.sw = 0;
}

void	init_ant_nb(t_lem *l)
{
	sp_gnl(l, &l->p.line);
	while (l->p.line[0] == '#')
	{
		if (!(ft_strcmp(l->p.line, "##start")) ||
			!(ft_strcmp(l->p.line, "##end")))
			error(l, NB_ANT);
		add_line(l);
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	if (!valide_nbr(l->p.line) ||
		((l->p.line) && l->p.line[0] == '-'))
		error(l, NB_ANT);
	if ((l->nb_ant = ft_atoi(l->p.line)) <= 0)
		error(l, NB_ANT);
	add_line(l);
	ft_memdel((void **)&l->p.line);
}

void	init_ant(t_lem *l)
{
	int		i;

	i = -1;
	if (!(l->ant = (t_ant *)malloc(sizeof(t_ant) * (l->nb_ant + 1))))
		error(l, MALLOC);
	ft_bzero(l->ant, sizeof(t_ant) * (l->nb_ant + 1));
	while (++i < l->nb_ant)
	{
		l->ant[i].name = i + 1;
		l->ant[i].room = l->start;
	}
}

void	init_pond(t_lem *l)
{
	weighting(l, l->end, 0, l->end);
	if (l->start->pond == -1)
		error(l, NO_PATH);
	l->room = l->start;
}

void	init(t_lem *l)
{
	set_all(l);
	init_ant_nb(l);
	while ((init_rooms(l)))
		ft_memdel((void **)&l->p.line);
	l->start->empty = OCC;
	while ((init_links(l)))
	{
		ft_memdel((void **)&l->p.line);
		sp_gnl(l, &l->p.line);
	}
	init_pond(l);
	init_ant(l);
}
