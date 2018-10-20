/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 13:02:26 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/10 14:32:29 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int res;

	if (index < 0)
		return (-1);
	if (!index)
		return (0);
	if ((index == 1) || (index == 2))
		return (1);
	res = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (res);
}
