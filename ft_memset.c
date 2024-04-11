/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:19:44 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:50:24 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	i = -1;
	while (++i < n)
	{
		str[i] = (unsigned char) c;
	}
	return (s);
}
/*int main(){
	char str[50];
	strcpy(str, "This is a test!");
	//char *str = "This is a test!";
	ft_memset(str, '-', 5);
	printf("%s", str);
}*/
