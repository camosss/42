/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 14:03:02 by hokang            #+#    #+#             */
/*   Updated: 2021/03/07 13:21:55 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		upper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		first(char c)
{
	if (lower(c) || upper(c) || num(c))
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && lower(str[i]))
			str[i] = str[i] - 32;
		else if (first(str[i - 1]) && lower(str[i]))
			str[i] = str[i] - 32;
		else if (!first(str[i - 1]) && upper(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
