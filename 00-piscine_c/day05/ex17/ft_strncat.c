/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/16 10:47:11 by aaiche            #+#    #+#             */
/*   Updated: 2017/09/16 11:50:32 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*dest_sav;

	dest_sav = dest;
	while (*dest != '\0')
		dest++;
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*dest = *src;
		src++;
		dest++;
		i++;
	}
	*dest = '\0';
	return (dest_sav);
}
