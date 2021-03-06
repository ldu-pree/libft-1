/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:48:17 by klees             #+#    #+#             */
/*   Updated: 2019/05/23 17:47:06 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int i;
	int len;
	char *out;

	i = 0;
	len = ft_strlen(src);
	out = (char *)malloc(len + 1);
	while (i <= len)
	{
		out[i] = src[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
