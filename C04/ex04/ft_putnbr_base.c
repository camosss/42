/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:16:56 by hokang            #+#    #+#             */
/*   Updated: 2021/03/11 18:17:40 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		base_check(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_mod(unsigned int num, char *base, int len)
{
	int mod;

	mod = num % len;
	if (num / len)
		ft_mod(num / len, base, len);
	ft_putchar(base[mod]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	unsigned int	num;

	len = base_check(base);
	if (len)
	{
		if (nbr >= 0)
			num = nbr;
		else
		{
			num = -nbr;
			ft_putchar('-');
		}
		ft_mod(num, base, len);
	}
}
