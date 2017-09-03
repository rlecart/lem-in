/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:06 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/03 17:22:27 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

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
	if (!valide_nbr(l->p.line))
		error(l, NB_ANT);
	if ((l->nb_ant = ft_atoi(l->p.line)) <= 0)
		error(l, NB_ANT);
	add_line(l);
	ft_memdel((void **)&l->p.line);
}

void	init(t_lem *l)
{
	l->p.line = NULL;
	l->p.map = ft_strnew(0);
	l->start = NULL;
	l->end = NULL;
	init_ant_nb(l);
	while ((init_rooms(l)))
		ft_memdel((void **)&l->p.line);
}
