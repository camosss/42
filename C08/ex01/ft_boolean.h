/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hokang <hokang@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:35:59 by hokang            #+#    #+#             */
/*   Updated: 2021/03/18 11:03:54 by hokang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define TRUE		1
# define FALSE		0
# define SUCCESS	0
# define EVEN(x)	x % 2 == 0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MGS	"I have an odd number of arguments.\n"

typedef int			t_bool;

#endif
