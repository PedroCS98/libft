/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 03:57:24 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/12 16:28:25 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*large_string;
	char	*small_string;

	large_string = (char *)big;
	small_string = (char *)little;
	if (!small_string)
		return (large_string);
	i = 0;
	while (large_string && i < len)
	{
		j = 0;
		while (large_string[i + j] != 0 
			&& small_string
			&& large_string[i + j] == small_string[j] 
			&& i + j < len)
			j++;
		if (j == ft_strlen(small_string))
			return (&large_string[i]);
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	char haystack[] = "This is a test!";
	char needle[] = "is";

	printf("Haystack: %s\nNeedle:%s\nWhere:%s", 
haystack, needle, ft_strnstr(haystack, needle, 4));

	return (0);
}*/
