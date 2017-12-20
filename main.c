#include "fdf.h"

/*
int **plotpoints(void)
{
//	int **array2d; 
//	array2d = malloc(sizeof(int) * width);

}

int *nextxy(int x, int y, int width, int height)
{
	if (x < width)
	{
		xy->x = x + 100;
		return 
	}
}
*/

int px_add(int x, int y, int px, int width, int height)
     {
	int new_px;
	if (x < width)
	{
		new_px = px + 30;
		return (new_px);
	}
	else if (y < height) 
		return (px);
	return (px);
}

int py_add(int x, int y, int py, int width, int height)
{
	int new_py;
	if (x < width) 
		return (py);
	else if (y < height)
	{
		new_py = py + 30;
		return (new_py);
	}
	return (py);
}

int main()
{
	t_env e;
	int **coord_arr;
	int size;
	t_coord **coord_data;

	e.mlx = mlx_init();
	e.win = mlx_new_window(e.mlx, 400,400, "mlx 42");

	size = 4;
	coord_arr = hardcoded_coords(size);
	ft_printarr2d(coord_arr, size);
	coord_data = xyz_array(coord_arr, size);
	print_coord_data(&coord_data, size);

//	free(coord_arr);
//	mlx_pixel_put(e.mlx, e.win, 200, 200, 0x00FFFFFF);
//	drawline(150, 150, 150, 200, &e);
//	drawgrid(&e, 100, 100);

// KEYHOOKS
//	mlx_key_hook(e.win, keysquaredraw, &e);
//	mlx_key_hook(e.win, keylinedraw, &e);
//	mlx_string_put(e.mlx, e.win, 50, 50, 0x00FFFFFF, "hello");
//	loop_hook();

	mlx_loop(e.mlx);
	//event programming
	//retrieving information from the server - mouse clicks/key presses
	//give information to the graphics server
}
