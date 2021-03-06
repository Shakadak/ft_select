/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 17:29:57 by npineau           #+#    #+#             */
/*   Updated: 2014/01/11 19:18:17 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termcap.h>
#include <stdlib.h>
#include "ft_select.h"

void	ft_quit(t_alst *data, struct termios *term, int ret)
{
	tputs(tgetstr("ve", NULL), 1, ft_printchar);
	tputs(tgetstr("te", NULL), 1, ft_printchar);
	term->c_lflag |= ICANON;
	term->c_lflag |= ECHO;
	tcsetattr(0, 0, term);
	if (ret)
		ft_return_lst(data, 0, data->i);
	exit(1);
}
