/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:09:29 by hokang            #+#    #+#             */
/*   Updated: 2021/03/09 11:39:20 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *s;
	char *f;

	if (!*to_find)
		return (str);
	while (*str)
	{
		s = str;
		f = to_find;
		while (*s != '\0' && *f != '\0' && *f == *s)
		{
			s++;
			f++;
		}
		if (!*f)
			return (str);
		str++;
	}
	return (0);
}
