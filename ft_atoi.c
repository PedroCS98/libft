/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 04:31:08 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/13 03:16:51 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		nbr;
	int		i;
	int		polarity;

	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	polarity = 1;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			polarity = -1;
	nbr = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - '0';
		i++;
	}
	return (nbr * polarity);
}
/*int main()
{
	char *num = " \t   +1234aaaa";
	printf("%d\n", ft_atoi(num));
	printf("%d", atoi(num));
}*/