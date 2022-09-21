#pragma once
#include <ostream>

using namespace std;

class Point
{
public:

    Point(int x, int y);

    bool operator==(const Point& PointToCompare) const;
    Point operator+ (const Point& point) const;
    
    int GetX() const { return x; }
    int GetY() const { return y; } 
private:

    int x;
    int y;
    
};

std::ostream& operator<<(ostream& stream, Point& point);