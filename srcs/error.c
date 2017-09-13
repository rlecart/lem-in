/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:54:09 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 16:42:57 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

char	good_arg(t_lem *l, char *av)
{
	int		i;

	i = 0;
	while (av[++i])
	{
		l->p.v = (av[i] == 'v') ? 1 : l->p.v;
		l->p.l = (av[i] == 'l') ? 1 : l->p.l;
		l->p.p = (av[i] == 'p') ? 1 : l->p.p;
		if (av[i] != 'v' && av[i] != 'l' && av[i] != 'p')
			return (0);
	}
	return (1);
}

void	usage(t_lem *l, int ac, char **av)
{
	l->p.v = 0;
	l->p.l = 0;
	l->p.p = 0;
	if (ac > 2 || (ac == 2 && av[1][0] != '-') ||
		(ac == 2 && av[1][0] == '-' && !av[1][1]))
	{
		ft_putstr_fd("usage: ./lem-in < [-vlp] map\n", 2);
		exit(0);
	}
	if (ac == 2 && !good_arg(l, av[1]))
	{
		ft_putstr_fd("lem-in: illegal option -- ", 2);
		ft_putstr_fd(av[1], 2);
		ft_putstr_fd("\nusage: ./lem-in < [-vlp] map\n", 2);
		exit(0);
	}
}

void	error_link(t_lem *l, int e)
{
	(e == LINK) ? ft_putstr_fd("Invalide link\n", 2) : 0;
	if (e == LINK_NAME)
	{
		ft_putstr_fd("Invalide room name : ["RED_MINUS, 2);
		ft_putstr_fd(l->p.name_check, 2);
		ft_putstr_fd(RED"] doesn't exist\n", 2);
	}
	(e == NO_PATH) ? ft_putstr_fd("No correct path\n", 2) : 0;
}

void	error_room(t_lem *l, int e)
{
	(e == NAME_ROOM) ? ft_putstr_fd("Invalide room name\n", 2) : 0;
	if (e == NAME_EXIST)
	{
		ft_putstr_fd("Invalide room name : ["RED_MINUS, 2);
		ft_putstr_fd(l->p.name_check, 2);
		ft_putstr_fd(RED"] already exist\n", 2);
	}
	(e == COOR_ROOM) ? ft_putstr_fd("Invalide coordinate\n", 2) : 0;
	(e == INFO_START) ? ft_putstr_fd("Invalide info for start\n", 2) : 0;
	(e == INFO_END) ? ft_putstr_fd("Invalide info for end\n", 2) : 0;
	(e == MISS_START) ? ft_putstr_fd("Missing room start\n", 2) : 0;
	(e == MISS_END) ? ft_putstr_fd("Missing room end\n", 2) : 0;
	(e == CONF_START) ? ft_putstr_fd("Conflict room start\n", 2) : 0;
	(e == CONF_END) ? ft_putstr_fd("Conflict room end\n", 2) : 0;
}

void	error(t_lem *l, int e)
{
	ft_putstr_fd(RED, 2);
	(e == MALLOC) ? ft_putstr_fd("Malloc error\n", 2) : 0;
	(e == FD) ? ft_putstr_fd("Can't read fd 0\n", 2) : 0;
	if (l->p.v == 0 && e != MALLOC && e != FD)
		e = ERROR;
	(e == ERROR) ? ft_putstr_fd("ERROR\n", 2) : 0;
	(e == NB_ANT) ? ft_putstr_fd("Invalide ant number\n", 2) : 0;
	error_room(l, e);
	error_link(l, e);
	ft_putstr_fd(RESET, 2);
	read(1, ((char[2]){"0\0"}), 1);
	clean_print(&l->p);
	exit(0);
}
