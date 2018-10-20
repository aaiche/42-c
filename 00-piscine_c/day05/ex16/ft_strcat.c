/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 10:12:39 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/16 10:45:02 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*dest_sav;

	dest_sav = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = *src;
	return (dest_sav);
}
