/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:40:54 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 16:25:07 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		main(int ac, char **av)
{
	t_lem	l;

	usage(&l, ac, av);
	init(&l);
	print_map(&l.p);
	road_trip(&l, &l.road);
	clean_all(&l);
	read(1, ((char[2]){"0\0"}), 1);
	return (0);
}
