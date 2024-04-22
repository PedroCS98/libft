/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 11:07:10 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/19 17:09:44 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	if (start > end)
		return (ft_strdup(s1 + end +1));
	while (ft_strrchr(set, s1[end]))
		end--;
	str = malloc((end - start) * sizeof(char) + 2);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}

/*int	main(){
	char const s[20] = " This is a test!  \0";
	char const set[2] = " \0";
	char *str = ft_strtrim(s, set);
	printf("%s", str);
}*/