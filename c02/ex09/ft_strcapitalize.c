/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 18:14:36 by pbencze           #+#    #+#             */
/*   Updated: 2024/05/19 16:53:18 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str);

char	ft_is_alphanumeric(char c);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	n;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		n = (i - 1);
		if (i == 0 && ft_is_alphanumeric(str[i]))
			str[i] = str[i] - 32;
		else if (ft_is_alphanumeric(str[n]) != 1
			&& ft_is_alphanumeric(str[i]) && !(str[i] <= '9' && str[i] >= '0'))
			str[i] = str[i] - 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	ft_is_alphanumeric(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 64) && (str[i] < 91))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
