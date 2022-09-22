#include "SmartPointer.h"

SmartPointer::SmartPointer(int* IntPtr) : Pointer(IntPtr)
{
    
}

SmartPointer::~SmartPointer()
{
    delete Pointer;
    Pointer = nullptr;
}

int& SmartPointer::operator*()
{
    return *Pointer; 
}
