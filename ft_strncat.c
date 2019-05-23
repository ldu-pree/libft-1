/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 15:09:23 by klees             #+#    #+#             */
/*   Updated: 2019/05/23 17:14:06 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n);

int main(void)
{
	char src[50] = "World";
	char dest[50]= "Hello ";

	strncat(dest, src, 5);

	printf("Source string : %s\n", src);
	printf("Destination string : %s\n", dest);
	return (0);
}
