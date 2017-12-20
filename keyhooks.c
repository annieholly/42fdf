#include "fdf.h"

int keylinedraw(int keycode, t_env *e)
{
    static int x1;
    static int y1;
    static int x2;
    static int y2;

    x1 = 100;
    y1 = 100;
    x2 = 200;
    y2 = 200;
    printf("key event %d\n", keycode);
    if (keycode == 49)
    {
        printf("draw the line\n");
        drawline(x1, y1, x2, y2, e);
        //x1 = x1 + 15;
        //x2 = x2 + 15;
        //y1 = y1 + 15;
        //y2 = y2 + 15;
    }

    return (0);
}

int keysquaredraw(int keycode, t_env *e)
{
    int x;
    int y;
//  x = 25;
//  y = 25;
    printf("key event %d\n", keycode);

    y = 50;
    while (y < 150)
    {
        x = 50;
        while (x < 150)
        {
            mlx_pixel_put(e->mlx, e->win, x, y, 0x00FFFFFF);
            x++;
        }
        y++;
    }

//  mlx_pixel_put(e->mlx, e->win, x, y, 0x00FFFFFF);
    return (0);
}
