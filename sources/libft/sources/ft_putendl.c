/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 11:40:15 by npineau           #+#    #+#             */
/*   Updated: 2013/11/30 19:36:37 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# include "libft.h"
#endif

void	ft_putendl(const char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
