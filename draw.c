#include "fdf.h" 

void drawline(int x1, int y1, int x2, int y2, t_env *e)
{
    int diff_x;
    int diff_y;
    int steps;
    int increment_x;
    int increment_y;
    int i;
    int x;
    int y;

    i = 0;
    x = x1;
    y = y1;
//  mlx_pixel_put(e->mlx, e->win, x, y, 0x00FFFFFF);
    diff_x = x2 - x1;
    diff_y = y2 - y1;
    if (abs(diff_x) > abs(diff_y))
        steps = abs(diff_x);
    else
        steps = abs(diff_y);
    increment_x = diff_x/steps;
    increment_y = diff_y/steps;

    while (i < steps)
    {
        x = x + increment_x;
        y = y + increment_y;
        mlx_pixel_put(e->mlx, e->win, x, y, 0x00FFFFFF);
        i++;
    }
}

/*
void drawsquare()
{
	int x; 
	int y;

    y = 50;
    while (y < 50)
    {
        x = 50;
        while (x < 50)
        {
            mlx_pixel_put(e.mlx, e.win, x, y, 0x00FFFFFF);
            x++;
        }
        y++;
    }
}
*/

void drawgrid(t_env *e)
{
    int x;
    int y;
    int width;
    int height;
    int px;
    int py;
    int orig_px;
    int orig_py;

    x = 0;
    y = 0;
    width = 3;
    height = 3;
    px = 100;
    py = 100;
    orig_px = px;
    orig_py = py;
    while (y < height)
    {
        printf("coord [%d, %d] PLACE AT - px: %d, py: %d\n", x, y, px, py);
        mlx_pixel_put(e->mlx, e->win, px, py, 0x00FF0000);
        px = px_add(x, y, px, width, height);
//      py = py_add(x, y, py, width, height);
        //x = 0;
        py = orig_py;
        printf("coord [%d, %d] while x < width NEXT plot point: %d, py: %d\n", x, y, px, py);
        x = 0;
        while (x < width)
        {
            mlx_pixel_put(e->mlx, e->win, px, py, 0x0000FF00);
            px = px_add(x, y, px, width, height);
//          py = py_add(x, y, py, width, height);

            printf("while y < height NEXT plot point: %d, py: %d\n", px, py);
            x++;
        }

        px = orig_px;
        y++;
    }
}
