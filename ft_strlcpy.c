/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:03:11 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 16:32:25 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = -1;
	while (++i < (size - 1) && src[i])
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*int	main(void)
{
	char	test1[50] = "This is a ";
	char	test2[50] = "Test!";
	size_t	size = 15;
	printf("Final sentence is: %s\nAnd the size is %d\n", 
	test1, (int)ft_strlcpy(test1, test2, size));
}*/