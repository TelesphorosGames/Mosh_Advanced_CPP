#pragma once

class SmartPointer
{
public:

    SmartPointer(int* IntPtr);
    ~SmartPointer();

private:

    int* Pointer;
};
