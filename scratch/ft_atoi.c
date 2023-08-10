int	ft_atoi(const char *str)
{
	int		i;
	long	result; //long nicht vergessen!!
	int		sign;

	result = 0;
	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)) //Klammern, while
		i++;
	if (str[i] == '+') // '' statt ""
		i++;
	else if (str[i] == '-') //if und nicht while
	{
		sign = -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result *= 10; //*=
		result += str[i] - '0'; //+=
		i++;
	}
	return (sign * result); //sign nicht vergessen
}
#include <stdio.h>
int	main(void)
{
	const char a[] =" 	\v-765abc";
	printf("%i", ft_atoi(a));
	return (0);
}
//set result to 0
//check for whitespace
//check for - or +, but not for both
//store result
//return result
