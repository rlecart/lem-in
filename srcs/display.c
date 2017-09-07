/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 06:53:20 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/07 09:30:37 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	display(int *ant, char **room, int nb_ant)
{
	int		i;

	i = 0;
	while (i < nb_ant)
	{
		ft_putchar('L');
		ft_putnbr(ant[i]);
		ft_putchar('-');
		ft_putstr(room[i]);
		i++;
		if (i < nb_ant)
			ft_putchar(' ');
	}
	ft_putchar('\n');
}
/*
int		main(void)
{
	int		i;
	int		nb_ant;
	int		*ant;
	char	**room;

	i = 0;
	nb_ant = 8;
	ant = ft_intnew(nb_ant);
	room = ft_strtabnew(3, nb_ant);
	while (i < nb_ant)
	{
		ant[i] = i + 1;
		room[i][0] = 'a' + i * 3;
		room[i][1] = 'b' + i * 3;
		room[i][2] = 'c' + i * 3;
		i++;
	}
	display(ant, room, nb_ant);
	return (0);
}
*/
