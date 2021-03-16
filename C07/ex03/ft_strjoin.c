/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 13:54:56 by hokang            #+#    #+#             */
/*   Updated: 2021/03/16 18:37:32 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int			ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char					*ft_strcat(char *dest, char *src)
{
	int				i;

	i = 0;
	while (src[i])
		*(dest++) = *(src++);
	return (dest);
}

char					*ft_strjoin(int size, char **strs, char *sep)
{
	char			*ret;
	char			*add;
	unsigned int	len;
	int				i;

	if (!size)
	{
		ret = (char *)malloc(1);
		ret[0] = 0;
		return (ret);
	}
	i = 0;
	len = 0;
	while (i < size)
		len += ft_strlen(strs[i++]);
	ret = (char *)malloc(len + 1 + (ft_strlen(sep) * (size - 1)));
	i = 1;
	add = ft_strcat(ret, strs[0]);
	while (i < size)
	{
		add = ft_strcat(add, sep);
		add = ft_strcat(add, strs[i++]);
	}
	*add = '\0';
	return (ret);
}
