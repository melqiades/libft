/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*memmove(void *dest, const void *src, size_t n);
{
	size_t	i;
	char*	buf;

	while (i < n)
	{

		((char *)buf)[i] = ((char *)src)[i];
		i++;
	}
	i = 0;
		while (i < n)
	{

		((char *)des)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}