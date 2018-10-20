/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 17:22:12 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:32:14 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p_out;

	p_out = (char *)malloc((size + 1) * sizeof(*p_out));
	if (p_out == NULL)
		return (NULL);
	ft_memset((void*)p_out, '\0', size + 1);
	return (p_out);
}
