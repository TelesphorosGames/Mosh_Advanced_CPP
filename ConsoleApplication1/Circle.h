#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
    Circle();
    

protected:

    virtual void Draw() override;
    
};
