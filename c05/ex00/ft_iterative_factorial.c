/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorais <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 07:38:43 by mmorais           #+#    #+#             */
/*   Updated: 2023/12/04 07:43:02 by mmorais          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	factorial;

	factorial = 1;
	while (nb > 0)
	{
		factorial *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (factorial);
}
