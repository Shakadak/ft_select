/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:26:09 by npineau           #+#    #+#             */
/*   Updated: 2014/01/11 19:24:31 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_select.h"
#include "libft.h"

int	key_hook(t_alst *d, struct termios *term)
{
	t_code	code;

	while (1)
	{
		ft_bzero(code.key, 4);
		read(0, code.key, 4);
		if (code.c == SPACE)
		{
			d->select = (d->select == 0 ? 1 : 0);
			return (1);
		}
		else if (code.c == DOWN)
			return (1);
		else if (code.c == UP)
			return (-1);
		else if (code.c == RETURN)
			ft_quit(d, term, 1);
		else if (code.c == ESC)
			ft_quit(d, term, 0);
	}
}
