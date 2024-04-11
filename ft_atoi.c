/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 04:31:08 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 06:05:29 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	char	*str;
	int		nbr;
	int		i;
	int		polarity;

	str = (char *) nptr;
	i = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	polarity = 1;
	if (str[i] == '-')
	{
		polarity = -1;
		i++;
	}
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
	}
	return (nbr * polarity);
}
/*int main()
{
	char *num = " \t   -1234aaaa";
	printf("%d\n", ft_atoi(num));
	printf("%d", atoi(num));
}*/