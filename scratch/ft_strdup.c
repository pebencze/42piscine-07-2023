#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strcpy(char	*dest, char	*src);

char	*ft_strdup(char *src)
{
	char	*dup;
	int		size;

	size = ft_strlen(src);
	dup = (char *)malloc((size + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	else
	{
		ft_strcpy(dup, src);
	}
	return (dup);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
char	*ft_strcpy(char	*dest, char	*src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char *src = "Tomeyto";
	char *dup = ft_strdup(src);
	if (dup == NULL)
		printf("Memory alloc failed.");
	else
		printf("%s", dup);
	free(dup);
	return (0);
}
