/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_elem.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 15:14:38 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 15:18:52 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_aff_elem(t_alst *d, t_term *e, int cursor)
{
	tputs(tgoto("cm", d->i / e->max_c, d->i % e->h), 1, ft_printchar);
	if (d->select == 1)
		tputs(tgetstr("mr", NULL), 1, ft_printchar);
	if (cursor)
		tputs(tgetstr("us", NULL), 1, ft_printchar);
	write(1, d_->param, d->size);
	tputs(tgetstr("me", NULL), 1, ft_printchar);
}
