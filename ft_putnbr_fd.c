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
		nbr *= -1;
	while (nbr / 10)
	{
		str[index--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[index--] = '-';
	ft_putstr_fd(&str[index], fd);
}

// void	ft_putnbr_fd2(int n, int fd)
// {
// 	int	last_digit;

// 	if (n == -2147483648)
// 	{
// 		ft_putstr_fd("-2147483648", fd);
// 		return ;
// 	}
// 	if (n < 0)
// 	{
// 		write(fd, "-", 1);
// 		n = -n;
// 	}
// 	if (n < 10)
// 	{
// 		n = n + '0';
// 		write(fd, &n, 1);
// 	}
// 	else
// 	{
// 		ft_putnbr_fd(n / 10, fd);
// 		last_digit = n % 10 + '0';
// 		write(fd, &last_digit, 1);
// 	}
// }