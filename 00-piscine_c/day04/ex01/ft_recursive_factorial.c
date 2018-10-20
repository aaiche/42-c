/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 11:53:54 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/10 12:12:15 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	if (!nb)
		return (1);
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}
