/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:23:40 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 15:52:43 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	alpha_mirror(int c)
{
	return (c = (c >= 'A' && c <= 'Z') ? 'Z' - (c - 'A') : 'z' - (c - 'a'));
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1])
		{
			if (isalpha(*av[1]))
				ft_putchar(alpha_mirror(*(av[1]++)));
			else
				write(1, av[1]++, 1);
		}
	}
	ft_putchar(1, "\n", 1);
	return (1);
}
