/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 03:57:24 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/17 21:24:47 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*little)
		return ((char *)big);
	i = -1;
	while (++i < len && big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] != 0 && big[i + j] == little[j] && i + j++ < len)
				if (j == ft_strlen(little))
					return ((char *)&big[i]);
		}
	}
	return (NULL);
}

/*int	main(void)
{
	char haystack[] = "This is a test!";
	char needle[] = "i";
	size_t len = 5;
	printf("Haystack: %s\nNeedle:%s\nWhere:%s\n", 
	haystack, needle, ft_strnstr(haystack, needle, len));
}*/