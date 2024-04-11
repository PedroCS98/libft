/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:22:00 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:51:24 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s;
	char		*d;

	s = (char *) src;
	d = (char *) dest;
	if (d > s)
	{
		while (--n >= 0)
		{
			d[n] = s[n];
		}
	}
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}
/*int main(){
	char str1[50];
	strcpy(str1, "This is a test!");
	ft_memmove(str1+5, str1, 5);
	printf("%s", str1);
}*/
