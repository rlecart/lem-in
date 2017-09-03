/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:42:49 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/03 16:22:52 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <libft.h>
# include <define.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>
# include <string.h>

typedef struct s_ant	t_ant;
typedef struct s_room	t_room;
typedef struct s_print	t_print;
typedef struct s_lem	t_lem;

struct			s_ant
{
	int			name;
	t_room		*room;
};

struct			s_room
{
	t_room		*prev;
	char		*name;
	int			pond;
	t_ant		*ant;
	t_room		**link;
	t_room		*next;
};

struct			s_print
{
	int			v;
	char		*line;
	char		*map;
};

struct			s_lem
{
	int			nb_ant;
	t_print		p;
	t_room		*start;
	t_room		*room;
	t_room		*end;
};

void			error(t_lem *l, int e);
void			usage(t_lem *l, int ac, char **av);

int				sp_gnl(t_lem *l, char **line);

int				valide_nbr(char *line);
int				valide_room(t_lem *l, char *line);

void			init(t_lem *l);

void			add_line(t_lem *l);

void			print_map(t_print *p);

void			clean_print(t_print *p);

#endif
