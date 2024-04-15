/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:18:51 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/12 16:27:44 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = -1;
	while (s[++i])
		;
	return (i);
}

/*#include <string.h>
int	main()
{
	const char	*s = "This is a test!";
	//const char	*s = "\0";
	printf("%d\n", (int)ft_strlen(s));
	printf("%d\n", (int)strlen(s));
}*/