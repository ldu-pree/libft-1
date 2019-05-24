/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klees <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 07:32:44 by klees             #+#    #+#             */
/*   Updated: 2019/05/24 07:59:34 by klees            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	int				x;
	unsigned char	*ss1;
	unsigned char	*ss2;

	x = 0;
	ss1 = (unsigned char *)s1;
	ss2 = (unsigned char *)s2;
	while (ss1[x] != '\0' && ss2[x] != '\0')
	{
		if (ss1[x] != ss2[x])
			return (ss1[x] - ss2[x]);
		x++;
	}
	return (ss1[x] - ss2[x]);
}
