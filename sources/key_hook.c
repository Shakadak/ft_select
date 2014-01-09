/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:26:09 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 15:31:20 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termcap.h>
#include "ft_select.h"

int	key_hook(t_alst *d, t_term *e)
{
	unsigned int	key;

	yolo_code();
	while (1)
	{
		ft_bzero(key, 4);
		read(0, (char *)&key, 4);
		if (key == SPACE)
		{
			d->select = (d->select == 0 ? 1 : 0);
			return (1);
		}
		else if (key == DOWN)
			return (1);
		else if (key == UP)
			return (-1);
		else if (key == RETURN)
			ft_return_lst();
		else if (key == ESC)
			ft_quit();
	}
}
