/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 03:46:48 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/12 22:24:23 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		if (((char *) s1)[i] != ((char *) s2)[i])
			return (((char *) s1)[i] - ((char *) s2)[i]);
	return (0);
}

/*#include <string.h>
int main(){
	char	list1[] = "test";
	char	list2[4];
	ft_strlcpy(list2, list1, 4);
	printf("%d\n", ft_memcmp(list1, list2, 5));
	printf("%d\n", memcmp(list1, list2, 5));
}*/