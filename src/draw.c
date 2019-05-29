/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 15:46:39 by humarque          #+#    #+#             */
/*   Updated: 2019/05/29 18:57:12 by humarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	draw(t_mlx *graph ,t_build	*param)
{
	int		x;
	int		y;
	int 	i;

	x = 0;
	y = 0;
	i = 0;
	while (x < param->map.taille || y < param->map.hauteur - 1)
	{
		if(x == param->map.taille)
		{
			x = 0;
			y++;
		}
		view(graph,param, x, y, i);
		x++;
		i++;
	}
}


/*void	 make_draw(t_build *param)
{
	if (param->start == 1)
	{
		if (param->map.taille >= param->map.hauteur)
		{
			param->move.blanck = param->map.taille * 2 > WIDTH ? 1 :
				(WIDTH * 0.5) / fdf->map.taille;
		}
		else
		{
			param->move.blanck = param->map.hauteur * 2 > HEIGHT ? 1 :
				(HEIGHT * 0.5) / param->map.hauteur;
		}
		param->move = -3;
	}
	param->start = 0; 
	draw(param);
}	*/