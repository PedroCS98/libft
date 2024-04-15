/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:21:18 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 11:52:18 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
	}
	return (dest);
}

/*#include <string.h>
int main(){
	char src[] = "This is a test!";
	char src2[] = "This is a test!";
	//char dst1[50];
	//char dst2[50];
	ft_memcpy(src, src, ft_strlen(src));
	memcpy(src2, src2, ft_strlen(src));
	printf("%s\n", src);
	printf("%s\n", src2);
	//printf("%s\n", dst2);
}*/
