/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:00:26 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/10 19:54:21 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	res;

	res = 1;
	if (!nb)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
