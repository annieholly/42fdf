FDF LOGIC 

# header file 
##

## need an int array of coordinates with their z

# main()
## init() 


# init() 
# read and parse file
## use getnextline and strsplit - will need putnbr to convert to num strings into ints
## create new struct for each coord and store into 2d int array - store x y z for each coord && initalize plot points to 0
## testing/debugging function: print list of coordinates and plot points
## store height and width of grid
## need to error check for valid file

# call pxpy_init() function to initialize plot points for each coord
## call pxpy00() function to calculate where plot x and plot y should be for first coordinate - store into coord struct
### pxpy00() should calculate the first coord off window size and center of the window
## remaining points to be calculated off initial coord

## function to iterate through each plot point in the order each line will be drawn

# function to apply a function to each plot point 

# change plot points into isometric grid 
# change plot points to account for z altitude

# call drawgrid() to iterate through plot points and drawline() between plot points to render wireframe
## drawgrid(2d array)

## currently drawline() is a naive implementation - replace with Bresenham's later

# key events
## escape key should exit the program/close the window


PRIORITIES
1. First, be able to store coordinates
2. Display using mlx_pixel_put
3. Display using an image