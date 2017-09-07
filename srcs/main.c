/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:40:54 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 09:28:25 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		main(int ac, char **av)
{
	t_lem	l;

	usage(&l, ac, av);
	init(&l);

	print_map(&l.p);
	read(1, ((char[2]){"0\0"}), 1);
	return (0);
}
