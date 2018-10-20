/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:24:57 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/18 19:31:32 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	int	rc;

	rc = 0;
	if ((c >= 0) && (c <= 127))
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}