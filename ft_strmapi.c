/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:03:40 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/16 19:14:46 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (s[++i] != 0)
		str[i] = f(i, s[i]);
	str[i] = 0;
	return (str);
}

/*char	my_ft_tolower(unsigned int c, char x)
{
	(void) x;
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

int main(){
	char *s = "ThIs iS a TeSt!";
	ft_strmapi(s, &my_ft_tolower);
	printf("%s\n", s);
}*/