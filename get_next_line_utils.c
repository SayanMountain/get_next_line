/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pjeffere <pjeffere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:07:17 by pjeffere          #+#    #+#             */
/*   Updated: 2021/05/11 19:33:32 by pjeffere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s1)
{
	char	*copia;
	size_t	kudrin;

	copia = malloc(ft_strlen(s1) + 1);
	if (!copia)
		return (NULL);
	kudrin = 0;
	while (s1[kudrin] != '\0')
	{
		copia[kudrin] = s1[kudrin];
		kudrin++;
	}
	copia[kudrin] = '\0';
	return (copia);
}

size_t	ft_strlen(char *s)
{
	size_t	kudrin;

	kudrin = 0;
	while (s[kudrin] != '\0')
	{
		kudrin++;
	}
	return (kudrin);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str;
	int		kudrin;
	int		j;
	size_t	n;

	if (!s1 || !s2)
		return (0);
	n = (ft_strlen (s1) + ft_strlen (s2));
	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	kudrin = 0;
	while (s1[kudrin])
	{
		str[kudrin] = s1[kudrin];
		kudrin++;
	}
	j = 0;
	while (s2[j])
	{
		str[kudrin++] = s2[j++];
	}
	str[kudrin] = '\0';
	free(s1);
	return (str);
}


char	*ft_strchr(char *s, int c)
{
	int	kudrin;

	kudrin = 0;
	while (s[kudrin])
	{
		if (s[kudrin] == (unsigned char)c)
		{
			return ((char *)(s + kudrin));
		}
		kudrin++;
	}
	if ((char)c == '\0')
		return ((char *)(s + kudrin));
	return (0);
}
