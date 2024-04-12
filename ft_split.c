/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:27:42 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 18:48:51 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wc;
	char	**array;
	char	*str;

	i = -1;
	wc = 1;
	while (s[++i] != 0)
	{
		if (s[i] == c)
			wc++;
	}
	array = (char **)malloc(wc + 1);
	if (!array)
		return(NULL);
	i = 0;
	wc = 0;
	while (s[i] != 0)
	{
		j = 0;
		str = (char *)malloc(ft_strlen(s) + 1);
		if (!str)
			return (NULL);
		while (s[i+j++] != c)
		{
			str[j] = s[i + j];
		}
		array[wc] = str;
		wc++;
		free(str);
		i += j + 1;
	}
	array[wc] = 0;
	return(array);
}

int	main(){
	char **array;
	char *s[] = "Hoje e terca feira";
	char c = ' ';
	array = ft_split(s, c);
	int i = 0;
	while (array)
	{
		puts(array[i]);
		i++;
	}
	free(array);
}