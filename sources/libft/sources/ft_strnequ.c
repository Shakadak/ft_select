/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 14:08:36 by npineau           #+#    #+#             */
/*   Updated: 2013/11/30 19:51:15 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# include "libft.h"
#endif

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return (!ft_strncmp(s1, s2, n));
}
