/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnicolas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:10:13 by fnicolas          #+#    #+#             */
/*   Updated: 2023/12/03 11:14:18 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_H
# define DICT_H

struct s_dict_element
{
	long	num;
	char			*name;
};

typedef struct s_dict_element	t_dict[33];

#endif
