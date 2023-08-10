/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 17:04:49 by pbencze           #+#    #+#             */
/*   Updated: 2023/07/26 15:39:46 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	store;
	int	i;
	int	j;

	i = (size - 1);
	j = 0;
	while (j < (size / 2))
	{
		store = tab[i];
		tab[i] = tab[j];
		tab[j] = store;
		i--;
		j++;
	}
}
/* function doesn't work with a void, because it cannot return anything
int main()
{
  int tab[] = {1, 2, 3, 4, 5, 6, 7, 8};
  ft_rev_int_tab(tab, 8);
  int i;

  i = 0;
  while (tab[i])
  {
    printf("%i", tab[i]);
    i++;
  }
  return 0;
}
*/
