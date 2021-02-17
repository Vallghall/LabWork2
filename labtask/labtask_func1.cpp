#include <math.h>
bool isInArea(double x, double y)
{
	double r = 1;
	if ((pow(x, 2) + pow(y, 2) > pow(r, 1)) || ((x > 0) & (y < 0)))
		return 0;
	else
		return 1;
}