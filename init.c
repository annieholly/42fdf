#include "fdf.h"

/*
void readfile(int fd)
{
    //getnextline();
    //strsplit into 2d array
}
*/
//intitialize 2d array with structs pointing to coord

int **hardcoded_coords(int mapsize)
{
	int **arr2d;
	int i; 
	int j; 
	
	i = 0; 
	j = 0;
	arr2d = malloc(sizeof(int) * mapsize);
	while (i < mapsize) 
	{
		arr2d[i] = malloc(sizeof(int));
		j = 0;
		while(j < mapsize)
		{
			arr2d[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr2d);
}

void	ft_printarr2d(int **arr, int size)
{
	int		i;
	int		j;
 
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0; 
		while (j < size)
		{
			printf("[%d]", arr[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}


t_coord coord_data(int x, int y, int pz)
{
    t_coord coords;
	coords = *(t_coord *)malloc(sizeof(t_coord));
//	printf("coords size: %lu\n", sizeof(*coords));
    coords.x = x;
    coords.y = y;
    coords.px = 0;
    coords.px = 0;
	coords.pz = pz;
    return (coords);
}

void print_coord_data(t_coord ***array, int size)
{
	int i; 
	int j; 
	
	i = 0; 
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			printf("i: %i, j: %i \n", i, j);
//			printf("coord[%d][%d][%d]\n", array[i]->x, array[i]->y, array[i]->pz);
			printf("coord[%d][%d][%d]\n", array[i][j]->x, array[i][j]->y, array[i][j]->pz);
			j++;
		}
		i++;
	}
	
}


t_coord **xyz_array(int **array, int size)
{
    t_coord **xyz_arr;
    int i;
	int j; 

    i = 0;
    xyz_arr = (t_coord **)malloc(sizeof(t_coord*) * size + 1);
    while (i < size)
    {
		j = 0;
        while (j < size)
        {
            xyz_arr[i] = (t_coord *)malloc(sizeof(t_coord));
			xyz_arr[i][j] = coord_data(i, j, array[i][j]);
//			printf("xyz[%i][%i] \n", xyz_arr[i]->x, xyz_arr[i]->y);
			printf("xyz[i][j]: x - %d, y - %d z - %d \n", xyz_arr[i][j].x, xyz_arr[i][j].y, xyz_arr[i][j].pz);
            j++;
        }
        i++;
    }
    return (xyz_arr);
}

