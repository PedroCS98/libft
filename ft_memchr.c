/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 03:32:12 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 06:03:16 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((char *) s)[i] == (char) c)
			return ((char *)(s + i));
	return (NULL);
}

/*#include <string.h>
int main(){
	char *test = "This is a test!";
	int	c = 'a';
	size_t size = 15;
	printf("%s\n", (char *)memchr(test, c, size));
	printf("%s\n", (char *)ft_memchr(test, c, size));
}*/