/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:06 by pbernier          #+#    #+#             */
/*   Updated: 2017/08/31 21:59:46 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	init_ant_nb(t_lem *l)
{
	sp_gnl(&l->line);
	while (l->line[0] == '#')
	{
		if ((ft_strcmp(l->line, "##start")) ||
			(ft_strcmp(l->line, "##end")))
			l->error = (l->error == -1) ? NB_ANT : l->error;
		ft_putendl(l->line);
		ft_memdel((void **)&l->line);
		sp_gnl(&l->line);
	}
	if (!valide_nbr(l->line))
		error(ERROR);
	if ((l->nb_ant = ft_atoi(l->line)) <= 0)
		l->error = (l->error == -1) ? NB_ANT : l->error;
	ft_putendl(l->line);
	ft_memdel((void **)&l->line);
}

void	init(t_lem *l)
{
	l->error = -1;
	init_ant_nb(l);
}
