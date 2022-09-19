#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) 
{
}

bool Point::operator==(const Point& PointToCompare) const
{
    return (x == PointToCompare.x && y == PointToCompare.y);
}
