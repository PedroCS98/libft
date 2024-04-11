/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:36:04 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 19:19:22 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size == 0 || size <= dst_len)
		return (src_len + size);
	i = 0;
	j = dst_len;
	while (src && i < size - dst_len - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}
/*int	main(void)
{
	//i is just a counter
	//j is dest size
	//k is src size
	char	test1[50] = "This is a ";
	char	test2[50] = "Test!";
	size_t	size = 15;
	
	//ft_strlcat(test1, test2, size);
	printf("Final sentence is: %s\nAnd the size is %d", 
test1, (int)ft_strlcat(test1, test2, size));
	return (0); 
}*/
