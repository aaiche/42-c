/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaiche <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:52:38 by aaiche            #+#    #+#             */
/*   Updated: 2017/11/28 18:34:18 by aaiche           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_get_num_words(const char *str, char c)
{
	int		num_words;
	char	*p;
	int		flag;

	flag = 0;
	num_words = 0;
	p = (char *)str;
	while (*p)
	{
		if (*p == c)
		{
			flag = 0;
		}
		else
		{
			if (flag == 0)
			{
				flag = 1;
				num_words++;
			}
		}
		p++;
	}
	return (num_words);
}

static int	strsplit_new(char **tab, char *p, char c, int count)
{
	char	*p_new_word;
	int		word_len;
	int		rc;

	rc = 0;
	word_len = 0;
	while (*p == c)
		p++;
	p_new_word = p;
	while ((*p != c) && (*p != '\0'))
	{
		p++;
		word_len++;
	}
	if ((*p == '\0') && !word_len)
		tab[count] = NULL;
	else
	{
		if ((tab[count] = ft_strsub(p_new_word, 0, word_len)) != NULL)
			rc = strsplit_new(tab, p, c, count + 1);
		else
			rc = 1;
	}
	return (rc);
}

static char	**ft_alloc_tab(int num_words)
{
	char	**tab;
	int		i;

	tab = (char **)malloc((num_words + 1) * sizeof(tab));
	if (tab == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < num_words + 1)
		{
			tab[i] = NULL;
			i++;
		}
	}
	return (tab);
}

char		**ft_strsplit(const char *str, char c)
{
	char	*p;
	char	**tab;
	int		num_words;
	int		i;

	num_words = 0;
	p = (char *)str;
	if (p == NULL)
		return (NULL);
	num_words = ft_get_num_words(p, c);
	if ((tab = ft_alloc_tab(num_words)) == NULL)
		return (NULL);
	if (strsplit_new(tab, p, c, 0))
	{
		i = 0;
		while (i < num_words + 1)
		{
			free(tab[i]);
			tab[i] = NULL;
			i++;
		}
		free(tab);
		tab = NULL;
	}
	return (tab);
}
