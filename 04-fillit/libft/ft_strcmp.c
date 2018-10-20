/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 18:30:32 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/17 18:37:22 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned int	diff;

	diff = 0;
	while ((*s1 != '\0') && (*s2 != '\0'))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			return (diff);
		else
		{
			if (*s1)
				s1++;
			if (*s2)
				s2++;
		}
	}
	if (((*s1 != '\0') && (*s2 == '\0')) || ((*s1 == '\0') && (*s2 != '\0')))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		return (diff);
	}
	return (diff);
}
