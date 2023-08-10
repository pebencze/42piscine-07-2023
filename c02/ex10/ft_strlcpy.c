/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:22:42 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/26 20:25:52 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	rv;

	rv = 0;
	while (src[rv] != '\0')
		rv++;
	i = 0;
	if (size > 0)
	{
		while (src[i] && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (rv);
}
/*
#include <stdio.h>

int	main(void)
{
	char	src[] = "aljdoekd\0";
	char	dest[10];

	ft_strlcpy(dest, src, 10);
	printf("%d", ft_strlcpy(dest, src, 10));
	printf("%s", dest);
	printf("%s", src);
	return (0);
}
*/
