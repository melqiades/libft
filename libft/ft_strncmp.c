/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

 int	ft_strncmp(const char *s1, const char *s2, size_t n)
 {
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if(s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
 }
/*
#include <stdio.h>
 int	main (void)
 {
	char *s1 = "aab";
	char *s2 = "aa";

	printf("result is %d\nresult is %d\n ", ft_strncmp(s1,s2, 10));
 }*/
