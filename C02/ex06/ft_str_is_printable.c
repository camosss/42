/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:18:59 by hokang            #+#    #+#             */
/*   Updated: 2021/02/25 11:26:12 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}
