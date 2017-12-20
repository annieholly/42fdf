FDF LOGIC 

### init.c
1.  read and parse file
a.  use getnextline and strsplit - will need putnbr to convert to num strings into ints
2. create new struct for each coord and store into 2d int array - store x y z for each coord && initalize plot points to 0
-  testing/debugging function: print list of coordinates and plot points
-  store height and width of grid
- need to error check for valid file
2. call pxpy_init() function to initialize plot points for each coord
3. call pxpy00() function to calculate where plot x and plot y should be for first coordinate - store into coord struct
-  pxpy00() should calculate the first coord off window size and center of the window
-  remaining points to be calculated off initial coord

### drawgrid.c
1. function to iterate through each plot point in the order each line will be drawn
2. function to apply a function to each plot point 
3. change plot points into isometric grid 
4. change plot points to account for z altitude
5. call drawgrid() to iterate through plot points and drawline() between plot points to render wireframe
- currently drawline() is a naive implementation - replace with Bresenham's line algorithm later

### key events
- escape key should exit the program/close the window


PRIORITIES
1. Be able to store coordinates and data into 2d array
2. Display using mlx_pixel_put
3. Display using an image