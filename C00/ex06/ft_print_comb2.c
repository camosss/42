/* ************************************************************************** */

/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 15:58:57 by hokang            #+#    #+#             */
/*   Updated: 2021/02/23 12:55:15 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ascii(char n, int m)
{
	char z;

	if (m == 1)
	{
		z = n / 10 + '0';
	}
	else
	{
		z = n % 10 + '0';
	}
	return (z);
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(ascii(a, 1));
			ft_putchar(ascii(a, 0));
			ft_putchar(' ');
			ft_putchar(ascii(b, 1));
			ft_putchar(ascii(b, 0));
			if (!(a == 98 && b == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
