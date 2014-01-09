/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:08:44 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 16:49:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <termcap.h>
#include <termios.h>
#include "ft_select.h"

void	ft_term(t_alst *data, int width)
{
	t_term			edge;
	struct termios	term;

	tcgetattr(0, &term);
	term.c_lflag &= ~(ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	tcsetattr(0, 0, &term);
	edge.h = tgetnum("li");
	edge.w = tgetnum("co");
	edge.max_c = edge.w / width;
	tputs(tgetstr("ti", NULL), 1, ft_printchar);
	tputs(tgetstr("vi", NULL), 1, ft_printchar);
	ft_aff_lst(data, &edge, 0);
	ft_travel_lst(data, &edge);
	tputs(tgetstr("ve", NULL), 1, ft_printchar);
	tputs(tgetstr("te", NULL), 1, ft_printchar);
	term.c_lflag |= ICANON;
	term.c_lflag |= ECHO;
	tcsetattr(0, 0, &term);
}
