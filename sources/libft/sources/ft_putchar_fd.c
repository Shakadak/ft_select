/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 16:03:08 by npineau           #+#    #+#             */
/*   Updated: 2013/11/30 19:34:58 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef UNISTD_H
# define UNISTD_H
# include <unistd.h>
#endif

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
