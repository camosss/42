/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:11:24 by hokang            #+#    #+#             */
/*   Updated: 2021/03/16 16:13:34 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_range();

#include <stdio.h>

int main()
{
	int i;
	int *temp;

	temp = ft_range(2,10);
	i = 0;
	while (i < 8)
	{
		printf("%d\n", temp[i]);
		i++;
	}
}
