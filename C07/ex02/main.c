/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 16:14:25 by hokang            #+#    #+#             */
/*   Updated: 2021/03/16 16:15:36 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_ultimate_range();

#include <stdio.h>

int main()
{
	int *range;
	int i;

	i = 0;
	printf("return = %d\n", ft_ultimate_range(&range, 2, 15));
	return (0);
}
