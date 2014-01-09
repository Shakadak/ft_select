/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_alst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 18:08:14 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 19:04:24 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_select.h"
#include "libft.h"

t_alst	*ft_new_alst(char	*data, t_alst *prev, int i)
{
	t_alst	*new;

	new = (t_alst *)malloc(sizeof(t_alst));
	if (!new)
		return (NULL);
	new->param = data;
	new->size = ft_strlen(data);
	new->select = 0;
	new->i = i - 1;
	new->prev = NULL;
	new->next = NULL;
	if (prev)
	{
		prev->next = new;
		new->prev = prev;
	}
	return (new);
}
