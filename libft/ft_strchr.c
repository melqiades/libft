/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char *loc;

	loc = 0;
	while (*s)
	{
		if (*s == c)
		{
			loc = (char*)s;
			break;
		}
		s++;
	}
	return (loc);
}

/*
#include <stdio.h>
int	main(void)
{
	char fin = 'b';
	const char *str = "a    dlfkj";
	char * pos;

	pos = ft_strchr(str, fin);
	printf("position is at %p", pos);
	printf("\n the lettter is \"%s\"", pos);
}*/
