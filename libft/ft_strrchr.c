/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*loc;
	int		len;

	loc = 0;
	len = ft_strlen(s);
	while (len > 0)
	{
		if (s[len] == c)
		{
			loc = (char *)s + len;
		}
		len--;
	}
	return (loc);
}

/*
int	main(void)
{
	char fin = 'L';
	char *str = "ao    dLfkj";
	char * pos;

	pos = ft_strrchr(str, fin);
	printf("position is at %p", pos);
	printf("\n the lettter is \"%s\"", pos);
}
*/