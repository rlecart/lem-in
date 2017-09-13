/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:26:55 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 18:17:31 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	add_line(t_lem *l)
{
	char	*line;

	line = ft_strnew(1);
	line[0] = '\n';
	ft_strjoin_clean(&l->p.map, &l->p.line);
	ft_strjoin_clean(&l->p.map, &line);
	ft_memdel((void **)&line);
}

void	print_map(t_print *p)
{
	ft_putstr(p->map);
	ft_memdel((void **)&p->map);
}

void	display(t_lem *l, int pond, int ant_name, char *room_name)
{
	ft_putstr("L"BRIGHT_BLUE);
	ft_putnbr(ant_name);
	ft_putstr(RESET"-"RED_MINUS);
	ft_putstr(room_name);
	ft_putstr(RESET);
	if (l->p.p)
	{
		ft_putstr("("GREY);
		ft_putnbr(pond);
		ft_putstr(RESET")");
	}
}
