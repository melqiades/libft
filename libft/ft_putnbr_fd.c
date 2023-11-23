/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putenbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpesan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 13:50:48 by lpesan            #+#    #+#             */
/*   Updated: 2023/09/07 14:33:12 by lpesan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    int i;
    char    pptr[11];

    i = 0;
    if (n < 0)
    {
        write(fd, "-", 1);
        n = - n;
    }

    if (n < 10)
        pptr[i] = n + 48;
    while (n > 0)
    {
        pptr[i] = ((n % 10) + 48);
        n = n / 10;
        i++;
    }
    while (i > 0)
    {
        write(fd, &(pptr[i - 1]), 1);
        i--;
    }
}
/*
int main (void)
{
    int    s = -235;
    int     fd = open("foo.txt", O_RDWR | O_CREAT);
    char    k[20];

    ft_putnbr_fd(s, fd);
    lseek(fd, 0, SEEK_SET);
    read(fd, k, 6);
    printf("this is what we have %s", k);
}*/