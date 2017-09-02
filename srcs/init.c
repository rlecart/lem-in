/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:06 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/02 13:00:11 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	init_ant_nb(t_lem *l)
{
	sp_gnl(&l->p.line);
	while (l->p.line[0] == '#')
	{
		if ((ft_strcmp(l->p.line, "##start")) ||
			(ft_strcmp(l->p.line, "##end")))
			l->p.error = (l->p.error == -1) ? NB_ANT : l->p.error;
		ft_putendl(l->p.line);
		ft_memdel((void **)&l->p.line);
		sp_gnl(&l->lp.ine);
	}
	if (!valide_nbr(l->p.line))
		error(ERROR);
	if ((l->nb_ant = ft_atoi(l->p.line)) <= 0)
		l->p.error = (l->error == -1) ? NB_ANT : l->p.error;
	ft_putendl(l->p.line);
	ft_memdel((void **)&l->p.line);
}

void	init(t_lem *l)
{
	l->p.error = -1;
	init_ant_nb(l);
}
