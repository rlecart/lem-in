/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/29 19:42:49 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:21:57 by rlecart          ###   ########.fr       */
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

typedef struct s_road	t_road;
typedef struct s_ant	t_ant;
typedef struct s_room	t_room;
typedef struct s_print	t_print;
typedef struct s_lem	t_lem;

struct			s_road
{
	int			i;
	int			sw;
};

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
	int			empty;
	int			nb_link;
	t_room		**link;
	t_room		*next;
};

struct			s_print
{
	int			v;
	int			l;
	int			p;
	int			nb_line;
	char		*line;
	char		*map;
	char		*name_check;
};

struct			s_lem
{
	int			nb_ant;
	t_print		p;
	t_room		*start;
	t_room		*room;
	t_room		*end;
	t_ant		*ant;
	t_road		road;
};

void			usage(t_lem *l, int ac, char **av);
char			good_option(t_lem *l, char *av);
void			error(t_lem *l, int e);
void			error_link(t_lem *l, int e);
void			error_room(t_lem *l, int e);

int				sp_gnl(t_lem *l, char **line);
void			add_line(t_lem *l);

void			init(t_lem *l);
void			set_all(t_lem *l);
void			init_ant_nb(t_lem *l);
int				init_rooms(t_lem *l);
int				init_links(t_lem *l);
void			init_pond(t_lem *l);
void			init_ant(t_lem *l);

int				valide_nbr(char *line);
int				valide_room(t_lem *l, char *line);
int				valide_link(t_lem *l, char *line);
void			room_exist(t_lem *l);

void			weighting(t_lem *l, t_room *r, int pond, t_room *prev);
void			road_trip(t_lem *l, t_road *r);
int				ant_left(t_lem *l, t_ant *ant);
t_room			*can_move(t_lem *l, t_ant *ant);
int				valide_path(t_lem *l, t_room *room, t_ant *ant);
void			change_room(t_lem *l, t_road *r, t_room *tmp);

void			display(t_lem *l, int pond, int ant_name, char *room_name);
void			print_map(t_print *p);

void			clean_print(t_print *p);
void			clean_all(t_lem *l);
void			clean_ant(t_ant **a);
void			clean_room(t_room **r);

#endif
