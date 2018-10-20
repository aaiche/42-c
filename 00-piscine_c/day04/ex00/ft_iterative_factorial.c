/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/09 16:19:37 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/12 19:25:50 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int res;

	if (!nb)
		return (1);
	if ((nb < 0) || (nb >= 13))
		return (0);
	res = 1;
	i = 0;
	while (i < nb)
	{
		res = (nb - i) * res;
		i++;
	}
	return (res);
}
