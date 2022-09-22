#include "Point.h"

Point::Point(int x, int y) : x(x), y(y) 
{
}

bool Point::operator==(const Point& PointToCompare) const
{
    return (x == PointToCompare.x && y == PointToCompare.y);
}

Point Point::operator+(const Point& point) const
{
    return Point(x + point.GetX(), y + point.GetY());
}

Point& Point::operator++()
{
    x++;
    y++;
    return *this;
}

Point Point::operator++(int)
{
    Point copy = *this;
    x++;
    y++;
    return copy;
    
}


std::ostream& operator<<(ostream& stream, Point& point)
{
    stream << point.GetX() << ", " << point.GetY();
    return stream;
}
