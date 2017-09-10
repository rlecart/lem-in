/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 13:26:55 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/10 14:31:56 by pbernier         ###   ########.fr       */
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

void	display_ant(int *i, int *bol, int *t1, int *t2)
{
	(*i)++;
	if (!(*bol))
	{
		(*t1)++;
		if (*t1 == 6 && (*bol = 1))
			*t2 += 5;
	}
	else
	{
		(*t1)--;
		if (*t1 == 0 && !(*bol = 0))
			*t2 += 7;
	}
	if (*t1 + *t2 == 36 && !(*t1 = 0))
		*t2 = 0;
}

void	display(int *ant, char **room, int nb_ant)
{
	int		i;
	int		t1;
	int		t2;
	int		bol;
	char	*tmp;

	i = 0;
	t1 = 0;
	t2 = 0;
	bol = 0;
	while (i < nb_ant)
	{
		ft_putstr("\033[38;5;");
		tmp = ft_itoa(t1 + t2 + 196);
		ft_putstr(tmp);
		ft_putstr("m");
		ft_putchar('L');
		ft_putnbr(ant[i]);
		ft_putchar('-');
		ft_putstr(room[i]);
		display_ant(&i, &bol, &t1, &t2);
		if (i < nb_ant)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}
/*
int		main(void)
{
	int		i;
	int		tmp;
	int		nb_ant;
	int		*ant;
	char	**room;

	i = 0;
	tmp = 0;
	nb_ant = 120;
	ant = ft_intnew(nb_ant);
	room = ft_strtabnew(3, nb_ant);
	while (i < nb_ant)
	{
		ant[i] = i + 1;
		room[i][0] = 'a' + tmp * 3;
		room[i][1] = 'b' + tmp * 3;
		room[i][2] = 'c' + tmp * 3;
		i++;
		tmp++;
		if (tmp == 8)
			tmp = 0;
	}
	display(ant, room, nb_ant);
	return (0);
}
*/
