/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aho <aho@student.42.us.org>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 14:50:03 by aho               #+#    #+#             */
/*   Updated: 2017/12/20 01:22:55 by aho              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FDF_H
# define _FDF_H

# include <stdlib.h>
# include <math.h> 
# include "mlx.h"

# include <stdio.h>

typedef struct	s_env
{
	void		*mlx;
	void		*win;
}				t_env;

typedef struct	s_coord
{
	int			x; 
	int			y;
	int			px; //plot_x
	int			py; //plot_y
	int			pz;
}				t_coord;

typedef struct	s_grid
{
	int			width;
	int			height;
}				t_grid;

// init.c
int			**hardcoded_coords(int mapsize);
void    	ft_printarr2d(int **array, int size);
t_coord		coord_data(int x, int y, int z);
t_coord		**xyz_array(int **array, int size);
void		print_coord_data(t_coord ***array, int size);

int		px_add(int x, int y, int px, int width, int height);
int		py_add(int x, int y, int py, int width, int height);

// draw.c
void	drawline(int x1, int y1, int x2, int y2, t_env *e);
void	drawgrid(t_env *e);

#endif
