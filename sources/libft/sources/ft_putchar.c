/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 11:32:56 by npineau           #+#    #+#             */
/*   Updated: 2014/01/08 17:45:30 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
