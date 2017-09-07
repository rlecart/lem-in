/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:54:09 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 01:47:20 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	usage(t_lem *l, int ac, char **av)
{
	l->p.v = 0;
	if (ac == 2 && (ft_strcmp(av[1], "-v")))
	{
		ft_putstr_fd("lem-in: illegal option -- ", 2);
		ft_putstr_fd(av[0], 2);
		ft_putstr_fd("\nusage: ./lem-in < [-v] map\n", 2);
		exit(0);
	}
	else if (ac > 2)
		ft_putstr_fd("usage: ./lem-in < [-v] map\n", 2);
	else if (ac == 2 && !(ft_strcmp(av[1], "-v")))
		l->p.v = 1;
	if (ac == 1 || ac == 2)
		return ;
	exit(0);
}

void	error(t_lem *l, int e)
{
	(e == MALLOC) ? ft_putstr_fd("Malloc error\n", 2) : 0;
	(e == FD) ? ft_putstr_fd("Can't read fd 0\n", 2) : 0;
	if (l->p.v == 0 && e != MALLOC && e != FD)
		e = ERROR;
	(e == ERROR) ? ft_putstr_fd("ERROR\n", 2) : 0;
	(e == NB_ANT) ? ft_putstr_fd("Invalide ant number\n", 2) : 0;
	(e == NAME_ROOM) ? ft_putstr_fd("Invalide room name\n", 2) : 0;
	(e == COOR_ROOM) ? ft_putstr_fd("Invalide coordinate\n", 2) : 0;
	(e == INFO_START) ? ft_putstr_fd("Invalide info for start\n", 2) : 0;
	(e == INFO_END) ? ft_putstr_fd("Invalide info for end\n", 2) : 0;
	(e == MISS_START) ? ft_putstr_fd("Missing room start\n", 2) : 0;
	(e == MISS_END) ? ft_putstr_fd("Missing room end\n", 2) : 0;
	(e == CONF_START) ? ft_putstr_fd("Conflict room start\n", 2) : 0;
	(e == CONF_END) ? ft_putstr_fd("Conflict room end\n", 2) : 0;

	clean_print(&l->p);
	clean_room(l->room);
	clean_room(l->start);
	clean_room(l->end);
	read(1, ((char[2]){"0\0"}), 1);
	exit(0);
}