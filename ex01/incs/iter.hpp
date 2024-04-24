#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void iter(T *array, size_t size, Func f)
{
    for (size_t i = 0; i < size; i++)
    {
        f(array[i]);
    }
}

template <typename T>
void printrValue(T element)
{
    std::cout << "element = " << element << std::endl;
}


#endif