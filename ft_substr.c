/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 08:15:14 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 09:16:42 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*new_str;
// 	size_t	i;
// 	size_t	j;

// 	if (!s || !(new_str = (char *)malloc(len + 1)))
// 		return (0);
// 	i = start;
// 	j = 0;
// 	while (i < ft_strlen(s) && j < len)
// 		new_str[j++] = s[i++];
// 	new_str[j] = '\0';
// 	return (new_str);
// }

/*
int	main(){
	char const *s = "This is a test!";
	unsigned int start = 5;
	size_t len = 7;
	char *str = ft_substr(s, start, len);
	printf("%s\n",str);
	free(str);
}*/