/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 16:13:01 by npineau           #+#    #+#             */
/*   Updated: 2014/01/11 19:16:38 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

int	ft_aff_lst(t_alst *data, t_term *e, int j)
{
	ft_aff_elem(data, e, 0);
	if (data->next->i > j)
		return (ft_aff_lst(data->next, e, j + 1));
	return (0);
}
