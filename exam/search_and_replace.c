/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:31:41 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 13:35:43 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	int i;

	ac = 4;
	if (ac == 4)
	{
		i = 0;
		while (av[1][i])
		{
			if (av[1][i] = av[2][0])
				av[1][i] = av[3][0];
			ft_putchar(av[1][i]);
			i++;
		}
		ft_putchar('\0');
		return (0);
	}
}
