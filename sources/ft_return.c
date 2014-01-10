/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_return.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/10 15:17:16 by npineau           #+#    #+#             */
/*   Updated: 2014/01/10 15:40:12 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_select.h"

void	ft_return_lst(t_alst *data, struct termios *term)
{
	int	spc;

	spc = 0;
	while (data)
	{
		if (data->select)
		{
			if (spc)
				write(0, " ", 1);
			write(0, data->param, data->size);
			spc++;
		}
		data->prev->next = NULL;/////////////////////////
		if (data->next)
		{
			data = data->next;
			free(data->prev);
		}
		else
		{
			free(data);
			data = NULL;
		}
	}
	ft_quit(data, term);
}
