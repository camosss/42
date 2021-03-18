/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:25:16 by hokang            #+#    #+#             */
/*   Updated: 2021/03/17 15:19:15 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strdup(char *str)
{
	int			i;
	int			size;
	char		*p;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (0);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int					ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *s_av;
	int			i;

	s_av = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!s_av)
		return (0);
	i = 0;
	while (av[i] != 0 && i < ac)
	{
		s_av[i].size = ft_strlen(av[i]);
		s_av[i].str = av[i];
		s_av[i].copy = ft_strdup(av[i]);
		i++;
	}
	s_av[i].size = 0;
	s_av[i].str = 0;
	s_av[i].copy = 0;
	return (s_av);
}
