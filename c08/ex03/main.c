#include "ft_point.h"

void 	set_point(t_point *point)
{
	point->x = 231;
	point->y = -432;
}

#include <stdio.h>
int main(void)
{
	t_point	point;
	set_point(&point);
	
	printf("%d\n", point.x);
	printf("%d", point.y);
	return (0);
}