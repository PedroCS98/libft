/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:22:00 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/17 21:19:46 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (dest > src)
		while (n--)
			((char *)dest)[n] = ((char *)src)[n];
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}

/*#include <string.h>
int main(){
	char *test = "This is a test!";
	char *src1 = ft_strdup(test);
	char *src2 = ft_strdup(test);
	ft_memmove(src1+2, src1, ft_strlen(src1));
	memmove(src2+2, src2, ft_strlen(src2));
	printf("%s\n", src1);
	printf("%s\n", src2);
	// printf("%p\n", &src1);
	// printf("%p\n", &src2);
}*/