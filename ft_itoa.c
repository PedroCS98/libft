/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:03:47 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/12 22:25:20 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	casas_decimais(int n)
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

	dc = casas_decimais(n);
	i = 0;
	if (n < 0)
		i = 1;
	nbr = (char *)calloc(1, dc + i + 1);
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
		n %= 10;
	}
	return (nbr);
}
// char	*ft_itoa(int n)
// {
// 	char	*nbr;
// 	int		i;
// 	int		dc;

// 	i = n;
// 	dc = 0;
// 	while (i != 0 && ++dc)
// 		i /= 10;
// 	if (n < 0)
// 		i = 1;
// 	nbr = (char *)calloc(1, dc + i + 1);
// 	if (n == -2147483648)
// 		return ((char *)"-2147483648");
// 	if (n < 0)
// 	{
// 		n *= -1;
// 		nbr[0] = '-';
// 	}
// 	if (n == 0)
// 		return ((char *)"0");
// 	while (dc-- > 0)
// 	{
// 		nbr[dc + i] = n % 10 + '0';
// 		n %= 10;
// 	}
// 	return (nbr);
// }
// int main(){
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(-4));
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(4));
// 	printf("%s\n", ft_itoa(22));
// }