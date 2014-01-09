/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_travel_lst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 16:22:58 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 18:36:14 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termios.h>
#include "ft_select.h"

int	ft_travel_lst(t_alst *data, t_term *e, struct termios *term)
{
	int	ret;

	ft_aff_elem(data, e, 1);
	ret = key_hook(data, term);
	ft_aff_elem(data, e, 0);
	if (ret == -1)
		return (ft_travel_lst(data->prev, e, term));
	else
		return (ft_travel_lst(data->next, e, term));
}
