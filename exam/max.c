/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 15:53:49 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 15:57:38 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[--len];
	while (len --)
		if (tab[len] > max)
			max = tab[len];
	return (max);
}

int main(int ac, char **av)
{
	int *tab;

	if (!(tab = (int *)malloc(sizeof(int) * 3)))
		return (0);
	tab[0] = 7;
	tab[1] = 6;
	tab[2] = 4;
	printf("%d\n", max(tab, 3));
	return (0);
}
