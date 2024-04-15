/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:27:42 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/12 21:45:03 by psimoes          ###   ########.fr       */
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
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			wc++;
	}
	return (wc);
}

static int	split_inator_inator(int *str_len, char ***array, char const *s, char c)
{
	int	wc;

	*array = NULL;
	wc = word_count(s, c);
	*str_len = (int)ft_strlen(s);
	*array = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!*array)
		return (0);
	(*array)[wc] = NULL;
	return (wc);
}

static char	**split_inator(char **array, int str_len, char const *s, char c)
{
	int	i;
	int	m;
	int	n;

	if (split_inator_inator(&str_len, &array, s, c) <= 0)
		return (NULL);
	m = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		str_len = 0;
		while (s[i + str_len] != c && s[i + str_len] != 0)
			str_len++;
		array[m] = (char *)malloc(sizeof(char) * str_len + 1);
		if (!array[m])
			return (NULL);
		n = 0;
		while (n < str_len && s[i] != c)
			array[m][n++] = s[i++];
		array[m++][n] = 0;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	int		str_len;
	char	**array;

	array = NULL;
	str_len = 0;
	return (split_inator(array, str_len, s, c));
}

/*void free_double_ptr(char **d_ptr)
{
	if (d_ptr != NULL)
	{
		while (*d_ptr)
		{
			free(*d_ptr);
			(d_ptr)++;
		}
		free(d_ptr);
	}
}
int	main(){
	char **array;
	char *s = "This is a test!";
	char c = 't';
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