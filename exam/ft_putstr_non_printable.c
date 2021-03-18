/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 16:40:16 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 16:43:16 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *s)
{
	int i;
	char *hexa;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			write(1, "\\", 1);
			write(1, &hexa[(unsigned char)str[i] / 16], 1);
			write(1, &hexa[(unsigned char)str[i] % 16], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
