/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:03:47 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 21:25:38 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(int n)
{
	int	dc;

	dc = 0;
	while (n != 0 && ++dc)
		n /= 10;
	return (dc);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;
	int		dc;

	dc = digit_counter(n);
	i = 0;
	if (n < 0)
		i = 1;
	nbr = (char *)ft_calloc(1, dc + i + 1);
	if (n == -2147483648)
		return ((char *)"-2147483648");
	if (n < 0)
	{
		n *= -1;
		nbr[0] = '-';
	}
	if (n == 0)
		return ((char *)"0");
	while (dc-- > 0)
	{
		nbr[dc + i] = n % 10 + '0';
		n /= 10;
	}
	return (nbr);
}

/*int main(){
	// printf("%s\n", ft_itoa(-2147483648));
	// printf("%s\n", ft_itoa(-4));
	// printf("%s\n", ft_itoa(0));
	// printf("%s\n", ft_itoa(4));
	// printf("%s\n", ft_itoa(22));
	char *res = ft_itoa(10);
		ft_print_result(res);
		free(res);
}*/