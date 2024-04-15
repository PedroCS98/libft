/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:19:44 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:50:24 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((unsigned char *) s)[i] = (unsigned char) c;
	return (s);
}

/*#include <string.h>
int main(void)
{
	char test[50];
	strcpy(test, "This is a test!");
	printf("%s\n", test);
	int	c = 127;
	size_t size = strlen(test);
	printf("%s\n", (char *)ft_memset(test, c, size));
	printf("%s\n", (char *)memset(test, c, size));
}*/