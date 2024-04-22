/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:15:14 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/19 14:57:57 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	substr = (char *)ft_calloc(len + 1, 1);
	if (!s || substr == NULL)
		return (NULL);
	i = 0;
	j = start;
	while (j < ft_strlen(s) && i < len)
		substr[i++] = s[j++];
	substr[i] = '\0';
	return (substr);
}
/*int	main(){
	char const *s = "This is a test!";
	unsigned int start = 18;
	size_t len = 7;
	char *str = ft_substr(s, start, len);
	printf("%s\n",str);
	free(str);
}*/