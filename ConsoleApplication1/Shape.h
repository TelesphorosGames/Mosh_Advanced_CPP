#pragma once
#include <string>

using namespace std;
class Shape
{
public:
    virtual ~Shape() = default;

    void SetBackground(string bg){ BackGround = bg ;}
    string GetBackground() const {return BackGround ; }

protected:

    virtual void Draw();

private:
    
      string BackGround{};

    
};
