/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 01:14:49 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/13 03:18:01 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c -= 32);
	}
	return (c);
}

/*int	main(){
	int		i = -1;
	char	s[] = "This 1231 is a Te42st";
	while(s[++i])
		s[i] = ft_toupper(s[i]);
	printf("%s\n", s);
}*/