/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:21:18 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:52:01 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *) src;
	d = (char *) dest;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
	}
	return (dest);
}
/*int main(){
	char str1[50];
	strcpy(str1, "This is a test!");
	char str2[50];
	strcpy(str2, "hihihihihihihihihihhi");
	//char *str = "This is a test!";
	ft_memcpy(str2, str1, 8);
	printf("%s", str2);
}*/
