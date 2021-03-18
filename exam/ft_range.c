/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:11:01 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 17:17:49 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int ret;
	int i;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	i = 0;
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
