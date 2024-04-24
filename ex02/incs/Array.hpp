#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdio.h>
template <typename T>
class Array
{
private:
    /* data */
    T *array;
    unsigned int size;
public:
    Array<T>(): array(NULL), size(0){}
    Array<T>(unsigned int n): size(n){
        this->array = new T[size];
    }
    Array<T>(const Array &src) {
        size = src.size;
        this->array = new T[size];
        for (int i = 0; i < size; i++)
        {
            this->array[i] = src.array[i];
        }
    }
    Array operator=(const Array &rhs){
        if (this != &rhs)
        {
            this->size = rhs.size;
            delete[] this->array;
            this->array = new T[size];
            for (int i = 0; i < size; i++)
            {
                this->array[i] = rhs.array[i];
            }
        }
        return (*this);
    }
    ~Array(){}
};

#endif