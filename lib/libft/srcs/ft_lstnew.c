/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlecart <rlecart@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:31:23 by rlecart           #+#    #+#             */
/*   Updated: 2017/09/14 18:23:00 by rlecart          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*ptr;

	ptr = NULL;
	if (!(ptr = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	ptr->next = NULL;
	if (!(content))
	{
		ptr->content = NULL;
		ptr->content_size = 0;
		return (ptr);
	}
	if (!(ptr->content = malloc(sizeof(content_size))))
		return (NULL);
	ft_memmove(ptr->content, content, content_size);
	ptr->content_size = content_size;
	return (ptr);
}
