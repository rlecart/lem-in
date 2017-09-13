/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbernier <pbernier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/31 16:50:05 by pbernier          #+#    #+#             */
/*   Updated: 2017/09/13 18:16:25 by pbernier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lem_in.h>

int		sp_gnl(t_lem *l, char **line)
{
	int		ret;
	int		size;
	char	*buff;

	size = 0;
	++l->p.nb_line;
	(!(buff = ft_strdup("A"))) ? error(l, MALLOC) : 0;
	ft_memcpy(buff, ((char[2]){"A\0"}), sizeof(char[2]));
	(!(*line = malloc(sizeof(char) * (size + 1)))) ? error(l, MALLOC) : 0;
	(*line)[size] = '\0';
	while (buff[0] != '\n')
	{
		if ((ret = read(0, buff, 1)) == -1)
			error(l, FD);
		if (!ret || (int)buff[0] == 0)
		{
			ft_memdel((void **)&buff);
			return (ret);
		}
		ft_strjoin_clean(line, &buff);
		++size;
	}
	(*line)[size - 1] = '\0';
	ft_memdel((void **)&buff);
	return (size);
}
