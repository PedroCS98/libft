/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:36:04 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 16:49:47 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	if (size == 0 || size <= i--)
		return (ft_strlen(src) + size);
	j = i + 1;
	while (++i < size - 1 && src[i - j])
		dst[i] = src[i - j];
	dst[i] = '\0';
	return (j + ft_strlen(src));
}

/*int	main(void)
{
	char	test1[] = "This is a ";
	char	test2[50] = "test!";
	size_t	size = 16;
	printf("Final sentence is: %s\nAnd the size is %d", 
		test1, (int)ft_strlcat(test1, test2, size));
}*/
