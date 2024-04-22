/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:21:18 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/19 17:08:56 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (0);
	i = -1;
	while (++i < n)
	{
		((char *) dest)[i] = ((char *) src)[i];
	}
	return (dest);
}

/*#include <string.h>
int main(){
	char src[] = "This is a test!";
	char dst1[50];
	char dst2[50];
	ft_memcpy(dst1, src, ft_strlen(src));
	memcpy(dst2, src, ft_strlen(src));
	printf("%s\n", dst1);
	printf("%s\n", dst2);
}*/