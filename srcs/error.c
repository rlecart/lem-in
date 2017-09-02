/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:54:09 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/02 13:23:46 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

void	usage(t_fil *l, int ac, char **av)
{
	else if (ac == 2 && (ft_strcmp(av[1], "-v")))
	{
		ft_putstr_fd("lem-in: illegal option -- ", 2);
		ft_putstr_fd(av[0], 2);
		ft_putstr_fd("\nusage: ./lem-in < [-v] map\n", 2)
	}
	else if (ac > 2)
		ft_putstr_fd("usage: ./lem-in < [-v] map\n", 2);
	else if (ac == 1 || ac == 2)
		return ;
	exit(0);
}

void	error(int e)
{
	(e == MALLOC) ? ft_putstr_fd("\nMalloc error\n", 2) : 0;
	(e == FD) ? ft_putstr_fd("\nCan't read fd 0\n", 2) : 0;
	(e == ERROR) ? ft_putstr_fd("\nERROR\n", 2) : 0;
	exit(-1);
}

int		error_info(int e)
{
	(e == NB_ANT) ? ft_putstr_fd("\nInvalide ant number\n", 2) : 0;
	if (e != -1)
		return (0);
	return (1);
}

int		valide_nbr(char *line)
{
	int	i;

	i = (line[0] == '-') ? 1 : 0;
	while (line[i] >= '0' && line[i] <= '9')
		++i;
	if ((line[i]) || (line[0] == '-' && !line[1]))
		return (0);
	return (1);
}
