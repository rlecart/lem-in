/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 18:42:22 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 14:46:47 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# define RESET "\033[0m"
# define RED "\033[38;5;1m"
# define RED_MINUS "\033[38;5;9m"
# define GREEN "\033[38;5;2m"
# define YELLOW "\033[38;5;3m"
# define BLUE "\033[38;5;4m"
# define PINK "\033[38;5;5m"
# define BRIGHT_BLUE "\033[38;5;6m"
# define GREY "\033[38;5;8m"

# define ERROR_ON 1
# define ERROR_OFF 0

# define OCC 0
# define EMP 1

# define ERROR 0
# define MALLOC 1
# define FD 2
# define NB_ANT 3
# define NAME_ROOM 4
# define NAME_EXIST 5
# define COOR_ROOM 6
# define INFO_START 7
# define INFO_END 8
# define MISS_START 9
# define MISS_END 10
# define CONF_START 11
# define CONF_END 12
# define LINK 13
# define LINK_NAME 14
# define NO_PATH 15

#endif
