/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:54:49 by hokang            #+#    #+#             */
/*   Updated: 2021/02/23 12:57:27 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char fir;
	char sec;
	char thr;

	fir = '0';
	while (fir <= '7')
	{
		sec = fir + 1;
		while (sec <= '8')
		{
			thr = sec + 1;
			while (thr <= '9')
			{
				write(1, &fir, 1);
				write(1, &sec, 1);
				write(1, &thr, 1);
				if (!(fir == '7' && sec == '8' && thr == '9'))
					write(1, ", ", 2);
				thr++;
			}
			sec++;
		}
		fir++;
	}
}
