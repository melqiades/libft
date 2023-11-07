/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n && (((char*)s1)[i] || ((char*)s2)[i]))
	{
		if(((char*)s1)[i] == ((char*)s2)[i])
			i++;
		else
			return (((char*)s1)[i] - ((char*)s2)[i]);
	}
	return (0);
}

// #include <stdio.h>
// int	main (void)
// {
// 	char *ptr = "abcdef";
// 	char *ptr2 = "abcd";

// 	printf("result: %d\n", ft_memcmp(ptr, ptr2, 8));
// }
