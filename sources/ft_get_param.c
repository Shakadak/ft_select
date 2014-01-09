/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_param.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/07 17:52:34 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 16:00:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_select.h"
#include <string.h>
#include "libft.h"

int	ft_get_param(t_alst **data, char **argv, int argc)
{
	t_alst	*new;
	t_alst	*begin;
	int		i;
	int		tmp;

	new = NULL;
	i = 1;
	tmp = 0;
	while (i < argc)
	{
		new = ft_new_alst(argv[i], *data, i);
		if (*data)
			data = &new;
		else
			*data = new;
		data = &new;
		if (i == 1)
			begin = new;
		tmp = (new->size > tmp ? new->size : tmp);
		i++;
	}
	begin->prev = new;
	new->next = begin;
	return (tmp);
}
