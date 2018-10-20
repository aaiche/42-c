/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 12:44:13 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/09 14:26:44 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;

	diff = 0;
	if ((*s1 == '\0') || (*s2 == '\0'))
		diff = (unsigned char)*s1 - (unsigned char)*s2;
	while ((*s1 != '\0') || (*s2 != '\0'))
	{
		diff = (unsigned char)*s1 - (unsigned char)*s2;
		if (diff != 0)
			break ;
		s1++;
		s2++;
	}
	return (diff);
}
