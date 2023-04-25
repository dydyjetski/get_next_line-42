/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeurant <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 19:55:33 by dmeurant          #+#    #+#             */
/*   Updated: 2023/04/25 19:55:34 by dmeurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *left_str, char *buff)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!buff)
	{
		return (left_str);
	}
	result = malloc(sizeof(char) * ((ft_strlen(left_str) + ft_strlen(buff))
				+ 1));
	if (result == NULL)
		return (NULL);
	i = -1;
	j = 0;
	if (left_str)
		while (left_str[++i] != '\0')
			result[i] = left_str[i];
	while (buff[j] != '\0')
		result[i++] = buff[j++];
	result[ft_strlen(left_str) + ft_strlen(buff)] = '\0';
	free(left_str);
	return (result);
}

char	*ft_get_line(char *left_str)
{
	int		i;
	char	*str;

	i = 0;
	if (!left_str[i])
		return (NULL);
	while (left_str[i] && left_str[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (left_str[i] && left_str[i] != '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	if (left_str[i] == '\n')
	{
		str[i] = left_str[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	search_n(char *left_str)
{
	int	i;

	i = 0;
	while (left_str[i])
	{
		if (left_str[i] == '\n')
		{
			i++;
			break ;
		}
		i++;
	}
	return (i);
}

char	*ft_new_left_str(char *left_str)
{
	int		i;
	int		j;
	char	*str;

	i = search_n(left_str);
	if (!left_str[i])
	{
		free(left_str);
		return (NULL);
	}
	str = (char *)malloc(sizeof(char) * (ft_strlen(left_str) - i + 1));
	if (!str)
		return (NULL);
	j = 0;
	while (left_str[i])
	{
		str[j++] = left_str[i++];
	}
	str[j] = '\0';
	free(left_str);
	return (str);
}
