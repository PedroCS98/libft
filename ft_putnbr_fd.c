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
}
