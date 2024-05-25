/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:03:47 by psimoes           #+#    #+#             */
/*   Updated: 2024/05/25 20:59:16 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	str[12];
	int		index;
	long	nbr;

	str[11] = 0;
	index = 10;
	if (n == 0)
		return (ft_strdup("0"));
	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr / 10 != 0)
	{
		str[index--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (n < 0)
		str[index--] = '-';
	return (ft_strdup(&str[index + 1]));
}

// static int	digit_counter(int n)
// {
// 	int	dc;

// 	if (n == 0)
// 		return (1);
// 	dc = 0;
// 	while (n / 10 != 0)
// 	{
// 		n /= 10;
// 		dc ++;
// 	}
// 	return (dc);
// }
// char	*ft_itoa2(int n)
// {
// 	char	*nbr;
// 	int		dc;
// 	int		long_n;

// 	long_n = n;
// 	dc = digit_counter(n);
// 	if (n < 0)
// 		dc++;
// 	nbr = ft_calloc(dc + 1, sizeof(char));
// 	if (!nbr)
// 		return (NULL);
// 	nbr[dc] = 0;
// 	if (n == 0)
// 	{	
// 		nbr[0] = '0';
// 		return (nbr);
// 	}
// 	if (n < 0)
// 		long_n *= -1;
// 	while (dc-- > 0)
// 	{
// 		nbr[dc] = long_n % 10 + '0';
// 		long_n = long_n / 10;
// 	}
// 	if (n < 0)
// 		nbr[0] = '-';
// 	return (nbr);
// }
/*
int main(){
	//printf("%s\n", ft_itoa(-2147483648));
	//printf("%s\n", ft_itoa(-4));
	char *s = ft_itoa(0);
	//printf("%s\n", ft_itoa(4));
	//printf("%s\n", ft_itoa(22));
	printf("%s\n", s);
	free(s);
}*/