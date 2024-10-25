#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <point.h>

typedef struct Rectangle * RECTANGLE;

struct Rectangle
{
	void (*set_w) (RECTANGLE, int);
	void (*set_h) (RECTANGLE, int);
	int	(*get_w) (RECTANGLE);
	int (*get_h) (RECTANGLE);
	
	void (*set_x) (RECTANGLE, int);
	void (*set_y) (RECTANGLE, int);
	int (*get_x) (RECTANGLE);
	int (*get_y) (RECTANGLE);

	int (*get_area) (RECTANGLE);
};

RECTANGLE rectangle_constructor (int, int, int, int);
void rectangle_deconstructor (RECTANGLE);

#endif
