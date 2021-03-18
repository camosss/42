/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:19:12 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 17:29:16 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_strcat(char *d, char *s)
{
	int i;

	i = 0;
	while (s[i])
		*d++ = *s++;
	return (d);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char *ret;
	char *add;
	int len;
	int i;

	if (!size)
	{
		ret = (char *)malloc(1);
		ret[0] = 0;
		return (0);
	}
	i = 0;
	len = 0;
	while (i < size)
		len = ft_strlen(strs[i]++);
	ret = (char *)malloc(len + 1 + ft_strlen(sep) * (size - 1));
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












