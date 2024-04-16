/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 03:27:13 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 18:20:54 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <string.h>
int	main(){
	char src[] = "This is a test! ";
	char src2[] = "This is a test!";
	size_t n = ft_strlen(src);
	printf("%d\n", ft_strncmp(src, src2, n));
	printf("%d\n", ft_strncmp(src2, src, n));
	printf("%d\n", strncmp(src2, src, n));
}*/
