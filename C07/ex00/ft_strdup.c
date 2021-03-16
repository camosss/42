/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:09:13 by hokang            #+#    #+#             */
/*   Updated: 2021/03/16 12:37:16 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char			*ft_strdup(char *str)
{
	int		i;
	int		size;
	char	*p;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (0);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
