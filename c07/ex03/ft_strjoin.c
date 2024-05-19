/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 11:50:09 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:56:06 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src);
int		ft_strlen(char *str);
char	*ft_empty(void);
char	*ft_join(char **strs, char *joined, int size, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joined;
	int		length;
	int		i;

	if (size == 0 || strs == NULL)
		return (ft_empty());
	else
	{
		length = ((size - 1) * ft_strlen(sep) + 1);
		i = 0;
		while (i < size)
			length += ft_strlen(strs[i++]);
		joined = (char *)malloc(length * sizeof(char));
		if (joined == NULL)
			return (NULL);
		else
		{
			joined[0] = '\0';
			ft_join(strs, joined, size, sep);
		}
	}
	return (joined);
}

char	*ft_join(char **strs, char *joined, int size, char *sep)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		ft_strcat(joined, strs[i]);
		ft_strcat(joined, sep);
		i++;
	}
	ft_strcat(joined, strs[size - 1]);
	return (joined);
}

char	*ft_empty(void)
{
	char	*joined;

	joined = (char *)malloc(1);
	if (joined == NULL)
		return (NULL);
	joined[0] = '\0';
	return (joined);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[k])
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
