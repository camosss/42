/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 19:49:08 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 20:00:48 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int 	ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str >= '0' && *str <= '9')
		ret = ret * 10 + (*(str++) - '0');
	return (sign * ret);
}

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		if (*av[2] == '+')
			printf("%d", atoi(av[1]) + atoi(av[3]));
		else if (*av[2] == '-')
			printf("%d", atoi(av[1]) - atoi(av[3]));
		else if (*av[2] == '*')
			printf("%d", atoi(av[1]) * atoi(av[3]));
		else if (*av[2] == '/')
			printf("%d", atoi(av[1]) / atoi(av[3]));
		else if (*av[2] == '%')
			printf("%d", atoi(av[1]) % atoi(av[3]));
	}
	printf("\n");
	return (0);
}
