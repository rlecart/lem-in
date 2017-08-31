/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:54:09 by pbernier          #+#    #+#             */
/*   Updated: 2017/08/31 19:58:29 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <lem_in.h>

void	error(int e)
{
	(e == MALLOC) ? ft_putstr_fd("\nMalloc error\n", 2) : 0;
	(e == FD) ? ft_putstr_fd("\nCan't read fd 0\n", 2) : 0;
	(e == NB_ANT) ? ft_putstr_fd("\nInvalide ant number\n", 2) : 0;
	exit(-1);
}

int 	valide_nbr(char *line)
{
	int	i;

	i = -1;
	if (line[0] == '-' || line[0] == '+')
	return (1);
}
