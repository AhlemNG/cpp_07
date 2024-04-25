/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:59:53 by anouri            #+#    #+#             */
/*   Updated: 2024/04/25 11:27:51 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
#include <stdio.h>
#include <iostream>
template <typename T>
class Array
{
private:
    /* data */
    T *array;
    unsigned int size;
public:
    Array<T>(): array(NULL), size(0){}
    Array<T>(unsigned int n): size(n)
    {
        this->array = new T[size];
    }
    Array<T>(const Array &src)
    {
        size = src.size;
        this->array = new T[size];
        for (unsigned int i = 0; i < size; i++)
        {
            this->array[i] = src.array[i];
        }
    }
    Array operator=(const Array &rhs)
    {
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
    ~Array(){delete[] this->array;}
    unsigned int Sise() const
    {
        return (this->size);
    }
    // T Access(unsigned int index)
    // {
    //     if (index > this->size)
    //         throw(std::out_of_range("Index out of range"));
    //     return(this->array[index]);
    // }
    // T *getArray()const
    // {
    //     return(this->array);
    // }
    class outOfBounds : public std::exception
    {
        public:
            using exception ::what;
            const char *what() const throw()
            {
                return ("index is out of bounds");
            }    
    };

    
    T &operator[](unsigned int index) const
    {
        if (index >= size)
            throw(Array::outOfBounds());
        return (this->array[index]);
    }

};

// template<typename T>
// std::ostream &operator<<(std::ostream & o, Array<T> const &rhs)
// {
//     for (unsigned int i= 0; i < rhs.Sise(); i++)
//         o  << rhs.getArray()[i] << std::endl;
//     return o;
// }


#endif