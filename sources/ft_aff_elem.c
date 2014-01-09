/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:14:38 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 18:43:05 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <termcap.h>
#include "ft_select.h"

void	ft_aff_elem(t_alst *d, t_term *e, int cursor)
{
	int	x;
	int	y;

	x = d->i / e->max_c;
	y = d->i % e->h;
	tputs(tgoto(tgetstr("cm", NULL), x, y), 1, ft_printchar);
	if (d->select == 1)
		tputs(tgetstr("mr", NULL), 1, ft_printchar);
	if (cursor)
		tputs(tgetstr("us", NULL), 1, ft_printchar);
	write(1, d->param, d->size);
	tputs(tgetstr("me", NULL), 1, ft_printchar);
}
