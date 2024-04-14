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
	unsigned char	*str;

	str = (unsigned char *) s;
	i = -1;
	while (++i < n)
	{
		str[i] = (unsigned char) c;
	}
	return (s);
}

/*int main(void)
{
	char test[50];
	strcpy(test, "This is a test!");
	char  sub1[50];
	strcpy(sub1, test);
	char  sub2[50];
	strcpy(sub2, test);
	printf("%s\n", test);
	size_t size = strlen(test);
	ft_memset(sub1, 128, 5);
	memset(sub2, 128, 5);
	printf("%s\n", sub1);
	printf("%s\n", sub2);
}*/