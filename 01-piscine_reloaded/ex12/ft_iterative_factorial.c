/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 15:40:31 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/10 20:04:03 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	res = 1;
	i = 1;
	if (!nb)
		return (1);
	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}
