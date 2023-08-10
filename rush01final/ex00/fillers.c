/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inikulin <inikulin@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 15:53:21 by inikulin          #+#    #+#             */
/*   Updated: 2023/07/30 18:47:37 by inikulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	aux_multi_assign(int vals[], int digits)
{
	vals[0] = digits / 1000;
	vals[1] = digits / 100 % 10;
	vals[2] = digits / 10 % 10;
	vals[3] = digits % 10;
}

void	aux_get_filler_23(int ver, int vals[])
{
	if (ver == 0)
		aux_multi_assign(vals, 1432);
	else if (ver == 1)
		aux_multi_assign(vals, 2431);
	else
		aux_multi_assign(vals, 3421);
}

void	aux_get_filler_22(int ver, int vals[])
{
	if (ver == 0)
		aux_multi_assign(vals, 1423);
	else if (ver == 1)
		aux_multi_assign(vals, 2413);
	else if (ver == 2)
		aux_multi_assign(vals, 3412);
	else if (ver == 3)
		aux_multi_assign(vals, 3241);
	else if (ver == 4)
		aux_multi_assign(vals, 3142);
	else
		aux_multi_assign(vals, 2143);
}

void	aux_get_filler_13(int ver, int vals[])
{
	if (ver == 0)
		aux_multi_assign(vals, 4132);
	else if (ver == 1)
		aux_multi_assign(vals, 4231);
	else
		aux_multi_assign(vals, 4312);
}

void	aux_get_filler_12(int ver, int vals[])
{
	if (ver == 0)
		aux_multi_assign(vals, 4123);
	else
		aux_multi_assign(vals, 4213);
}
