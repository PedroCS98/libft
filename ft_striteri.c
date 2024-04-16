/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:03:57 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/13 03:11:34 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = -1;
	if (s)
		while (s[++i] != 0)
			f(i, &s[i]);
}

/*static	void ft_putchr(unsigned int i, char *s)
{
	while (s[i])
		write(1, &s[i++], 1);
	write(1, "\n", 1);
}

int main(){
	char *s = "ThIs iS a TeSt!";
	ft_striteri(s, &ft_putchr);
	printf("%s\n", s);
}*/