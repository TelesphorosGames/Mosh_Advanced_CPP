#pragma once

#include <cstddef>


class Array
{
public:
    Array() = delete;
    explicit Array(size_t size);
    ~Array();

    int& operator[](size_t index);

    
private:

    int* values;
    size_t size;
    
};
