/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 17:30:00 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 17:38:34 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int len;
	int i;
	char c;

	len = 0;
	while (str[len] != '\0')
		len++;
	i = 0;
	while (i < (len / 2))
	{
		c = str[i];
		str[i] = str[len - i];
		str[len - i] = c;
		i++;
	}
	return (str);
}

int main(void)
{

