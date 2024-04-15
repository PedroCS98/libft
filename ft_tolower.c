/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:19:37 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/13 03:17:56 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c += 32);
	return (c);
}

/*int	main(){
	int		i = -1;
	char	s[] = "This [1231 is a Te42st";
	while(s[++i])
		s[i] = ft_tolower(s[i]);
	printf("%s\n", s);
}*/