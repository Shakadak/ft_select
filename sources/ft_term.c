/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_term.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 15:08:44 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 19:14:50 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <termcap.h>
#include <termios.h>
#include "ft_select.h"
#include "libft.h"

void	ft_term(t_alst *data)
{
	t_term			edge;
	struct termios	term;
	char			read_char[5] = {0};

	ft_putendl("entree term");
	tcgetattr(0, &term);
	term.c_lflag &= ~(ICANON);
	term.c_lflag &= ~(ECHO);
	term.c_cc[VMIN] = 1;
	term.c_cc[VTIME] = 0;
	tcsetattr(0, 0, &term);
	edge.h = tgetnum("li");
	edge.w = tgetnum("co");
	tputs(tgetstr("ti", NULL), 1, ft_printchar);
	tputs(tgetstr("vi", NULL), 1, ft_printchar);
	ft_aff_lst(data);
	tputs(tgetstr("ho", NULL), 1, ft_printchar);
	ft_manage_lst(data);
	while (read_char[0] == 0)
		read(0, read_char, 4);
	tputs(tgetstr("ve", NULL), 1, ft_printchar);
	tputs(tgetstr("te", NULL), 1, ft_printchar);
	term.c_lflag |= ICANON;
	term.c_lflag |= ECHO;
	tcsetattr(0, 0, &term);
	ft_putendl("sortie term");
}
