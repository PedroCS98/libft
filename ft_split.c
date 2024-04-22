/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:27:42 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/19 17:09:27 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	wc;
	int	i;

	i = -1;
	wc = 0;
	if (s[0] != c && s[0] != 0)
		wc++;
	while (s[++i] != 0)
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			wc++;
	return (wc);
}

static char	**free_array(char **array, int m)
{
	while (m > 0)
		free(array[m--]);
	free(array);
	return (NULL);
}

static char	**split_inator(char **array, char const *s, char c)
{
	int	i;
	int	m;
	int	n;
	int	str_len;

	m = 0;
	i = 0;
	while (s[i] != 0 && m < word_count(s, c))
	{
		while (s[i] == c && s[i] != 0)
			i++;
		str_len = 0;
		while (s[i + str_len] != c && s[i + str_len] != 0)
			str_len++;
		array[m] = (char *)ft_calloc(sizeof(char) * (str_len + 1), 1);
		if (!array[m])
			return (free_array(array, m));
		n = 0;
		while (n < str_len && s[i] != c)
			array[m][n++] = s[i++];
		array[m++][n] = '\0';
	}
	array[m] = 0;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!array)
		return (NULL);
	array = split_inator(array, s, c);
	return (array);
}

/*int	main(){
	char **array;
	//char *s = "This is a test!";
	char	*s = "      split       this for   me  !       ";
	char c = ' ';
	array = ft_split(s, c);
	int i = 0;
	while (array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}
	free(array);
	//free_double_ptr(array);
}*/

//skip seperator
//ver qts char ate prox sep
//alloc mem
//copiar cada carater