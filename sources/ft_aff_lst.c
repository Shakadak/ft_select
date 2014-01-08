/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aff_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 16:13:01 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 19:13:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <termcap.h>
#include "ft_select.h"
#include "libft.h"

int	ft_aff_lst(t_alst *data)
{
	write(1, data->param, data->size);
	tputs(tgetstr("do", NULL), 1, ft_printchar);
	if (data->next)
		return (ft_aff_lst(data->next, 1));
	return (0);
}
