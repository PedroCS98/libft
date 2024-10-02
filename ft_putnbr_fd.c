/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 03:37:42 by psimoes           #+#    #+#             */
/*   Updated: 2024/05/25 20:58:59 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	str[12];
	int		index;
	long	nbr;

	str[11] = 0;
	nbr = n;
	index = 10;
	if (n < 0)
		nbr = -nbr;
	if (n == 0)
		return (ft_putstr_fd("0", fd));
	while (nbr > 0)
	{
		str[index--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[index--] = '-';
  	ft_putstr_fd(&str[index + 1], fd);
}

/*
void	ft_putnbr_fd(int n, int fd)
{
	int		last_digit;
	long	nbr;

	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	nbr = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	if (nbr < 10)
	{
		nbr = nbr + '0';
		write(fd, &nbr, 1);
	}
	else
	{
		ft_putnbr_fd(nbr / 10, fd);
		last_digit = nbr % 10 + '0';
		write(fd, &last_digit, 1);
	}
}*/
