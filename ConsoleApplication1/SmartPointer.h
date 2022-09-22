#pragma once

class SmartPointer
{
public:

    SmartPointer(int* IntPtr);
    ~SmartPointer();

   int& operator*();

private:

    int* Pointer;
};
