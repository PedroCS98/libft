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

	substr = (char *)malloc((sizeof (char) * (len + 1)));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
/*int	main(){
	char const *s = "This is a test!";
	unsigned int start = 5;
	size_t len = 7;
	char *str = ft_substr(s, start, len);
	printf("%s\n",str);
	free(str);
}*/