/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psimoes <psimoes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:20:53 by psimoes           #+#    #+#             */
/*   Updated: 2024/04/11 05:50:50 by psimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*int main(void)
{
	char test[50];
	strcpy(test, "This is a test!");
  char  sub1[50];
  strcpy(sub1, test);
  char  sub2[50];
  strcpy(sub2, test);
	printf("%s\n", test);
  size_t size = strlen(test);
  ft_bzero(sub1, 5);
  bzero(sub2, 5);
  printf("%s\n", sub1);
  printf("%s\n", sub2);
}*/
