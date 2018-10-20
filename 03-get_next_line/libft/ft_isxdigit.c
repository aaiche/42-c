/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 15:49:58 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/21 15:56:41 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isxdigit(int c)
{
	int	rc;

	rc = 0;
	if (((c >= '0') && (c <= '9')) || \
		((c >= 'a') && (c <= 'f')) || \
		((c >= 'A') && (c <= 'F')))
	{
		rc = 1;
	}
	else
	{
		rc = 0;
	}
	return (rc);
}