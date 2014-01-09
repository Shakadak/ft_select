/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 16:13:01 by npineau           #+#    #+#             */
/*   Updated: 2014/01/09 19:02:46 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

int	ft_aff_lst(t_alst *data,t_term *e, int j)
{
	ft_aff_elem(data, e, 0);
	ft_putnbr(j);//////////////////////////////
	ft_putchar(':');///////////////////////////
	ft_putnbr(data->next->i);//////////////////
	ft_putchar('\n');//////////////////////////
	if (data->next->i > j)
		return (ft_aff_lst(data, e, j + 1));
	return (0);
}
