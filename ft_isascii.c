/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:17:10 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/13 03:17:04 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int main() {
  //printf() displays the string inside quotation
  int test = 128;
  printf("my ascii is %d\n", ft_isascii(test));
  printf("og ascii is %d\n", isascii(test));
  return 0;
}*/