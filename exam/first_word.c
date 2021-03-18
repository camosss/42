/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:05:22 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 19:10:41 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' || *av[1] != '\t'))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
