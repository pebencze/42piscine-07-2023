/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:17:26 by pbencze           #+#    #+#             */
/*   Updated: 2023/08/09 13:44:32 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		size;

	if (src == NULL)
		return (NULL);
	size = ft_strlen(src) + 1;
	duplicate = (char *)malloc(size * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, src);
	return (duplicate);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int main() {
    char *source = "Hello, World!";
    char *duplicate = ft_strdup(source);
	char *duplicate2 = strdup(source);

    if (duplicate != NULL) {
        printf("Source: %s\n", source);
        printf("Duplicate: %s\n", duplicate);
        free(duplicate);
	}
	if (duplicate2 != NULL) {
        printf("Source: %s\n", source);
		printf("Duplicate: %s\n", duplicate2);
		free(duplicate2);
    } else {
        printf("Memory allocation failed.\n");
    }
    return (0);
}
*/
