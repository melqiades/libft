/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_itoa(int n)
{
	char    *res;
	int i;
	char *rest;
	int	k;

	res = malloc(12 * sizeof(char));
	i = 0;
	k = 0;
	while(!(n < 10))
	{
		res[i] = (n % 10) + 48;
		i++;
		n = n / 10;
	}
	res[i] = (n % 10) + 48;
	if (n < 0)
		res[i++] = '-';
	res[i + 1] = 0;
	rest = malloc((i + 1) * sizeof(char));
	while(i > -1)
		rest[k++] = res[i--];
	rest[k] = 0;
	return	(rest);
}

int main(void)
{
	char *res;
	res = ft_itoa(-1200320);
	printf("%s", res);
}