/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:54:06 by pbernier          #+#    #+#             */
/*   Updated: 2017/08/31 19:55:03 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		init_ant_nb(t_lem *l)
{
	sp_gnl(&l->line);
	while (l->line[0] == '#')
	{
		if ((ft_strncmp(l->line, "##start", 7)) ||
	 		(ft_strncmp(l->line, "##end", 7)))
	 		l->error = NB_ANT;
		ft_putendl(l->line);
	 	ft_memdel((void *)line);
	 	sp_gnl(line);
	}
	if (!valide_nbr(l->line))
		error(ERROR);
	((t->nb_ant = ft_itoa(l->line)) <= 0)
	 	l->error = NB_ANT;
	ft_putendel(l->line);
}

void	init(t_lem *l)
{
	init_ant_nb(l);
}
