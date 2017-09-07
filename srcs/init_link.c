/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_link.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/07 03:37:58 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/07 05:24:12 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

//void	set_link(t_lem *l)

int		init_links(t_lem *l)
{
	int		len_1;
	int		len_2;
	char	*(name_check[2]);

	len_1 = 0;
	len_2 = 0;
	//printf(".[%s]\n", l->p.line);
	add_line(l);
	if ((l->p.line[0] == '#') || (!ft_strncmp(l->p.line, "##", 2)))
		return (1);
	valide_link(l, l->p.line);
	while ((l->p.line[len_1] != '-'))
		++len_1;
	name_check[0] = ft_strsub(l->p.line, 0, len_1);
	len_2 = ++len_1;
	while ((l->p.line[len_2]))
		++len_2;
	len_2 -= len_1;
	name_check[1] = ft_strsub(l->p.line, len_1, len_2);
	//printf("[%s][%d] - [%s][%d]\n", name_check[0], len_1, name_check[1], len_2);
	//set_link(l, name_check[0], name_check[1]);
	ft_memdel((void **)&name_check[0]);
	ft_memdel((void **)&name_check[1]);
	return (0);
}
