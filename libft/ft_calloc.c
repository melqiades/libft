/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void *ptr;
	int	i;
	
	i = 0;
	if (nitems == 0 || size == 0)
		return(NULL);
	if ((nitems * size) > INT_MAX)
		return(NULL);
	ptr = malloc(nitems * size);
	if (ptr == NULL)
		return (NULL);
	while (i < (nitems * size))
	{
		((char*)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}

/*
int	main(void)
{
	int	nitems = 20;
	int	size = 8;

	printf("%p", ft_calloc(nitems, size));
}*/
