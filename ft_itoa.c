/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:03:47 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/19 17:08:23 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	dc;

	dc = 1;
	while (n / 10 != 0)
	{
		n /= 10;
		dc ++;
	}
	return (dc);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		dc;
	int		long_n;

	long_n = n;
	dc = digit_counter(n);
	if (n < 0)
		dc++;
	nbr = (char *)ft_calloc(dc + 1, 1);
	if (!nbr)
		return (NULL);
	nbr[dc] = 0;
	if (n == 0)
		return (nbr = "0");
	if (n < 0)
		long_n *= -1;
	while (dc-- > 0)
	{
		nbr[dc] = (unsigned int)long_n % 10 + '0';
		long_n = (unsigned int)long_n / 10;
	}
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}
/*int main(){
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(-4));
	printf("%s\n", ft_itoa(0));
	printf("%s\n", ft_itoa(4));
	printf("%s\n", ft_itoa(22));
}*/