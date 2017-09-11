/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weighting.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 16:43:17 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/11 19:05:42 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	weighting(t_lem *l, t_room *r, int pond, t_room *prev)
{
	int		nb_tmp;
	t_room	*tmp;

	nb_tmp = r->nb_link;
	tmp = r;
	if (tmp == l->end && nb_tmp == 0)
		return ;
	if (tmp->pond == -1 || tmp->pond > pond)
		tmp->pond = pond;
	while (nb_tmp > 0)
	{
		if (tmp->pond == -1 || tmp->pond > pond)
			tmp->pond = pond;
		if (tmp == l->start)
			return ;
		if (tmp->link[--nb_tmp] != prev)
			weighting(l, tmp->link[nb_tmp], tmp->pond + 1, tmp);
	}
}
