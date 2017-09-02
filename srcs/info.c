/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:50:05 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/02 15:14:19 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		sp_gnl(t_lem *l, char **line)
{
	int		ret;
	int		size;
	char	buff[1];

	size = 0;
	buff[0] = 'A';
	if (!(*line = (char *)malloc(sizeof(char) * (size + 1))))
		error(MALLOC, l);
	(*line)[size] = '\0';
	while (buff[0] != '\n')
	{
		if ((ret = read(0, buff, 1)) == -1)
			error(FD, l);
		if (!ret)
			return (ret);
		ft_strjoin_clean_char(line, buff[0]);
		++size;
	}
	(*line)[size - 1] = '\0';
	ret = size;
	return (ret);
}
