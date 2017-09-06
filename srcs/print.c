/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:26:55 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/03 16:38:02 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	add_line(t_lem *l)
{
	ft_strjoin_clean(&l->p.map, &l->p.line);
	ft_strjoin_clean_char(&l->p.map, '\n');
}

void	print_map(t_print *p)
{
	ft_putstr(p->map);
	ft_memdel((void **)&p->map);
}
