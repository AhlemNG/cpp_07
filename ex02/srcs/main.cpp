/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:59:59 by anouri            #+#    #+#             */
/*   Updated: 2024/04/25 11:27:13 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "../incs/Array.hpp"
// #include "../../ex01/incs/iter.hpp"

// int main()
// {
//     Array<int> a(20);
//     for (unsigned int i = 0; i < a.Sise(); i++)
//         std::cout << a[i] << std::endl;
//     std::cout << "*************************************************************" << std::endl;
//     try
//     {
//         std::cout << a[25] << std::endl;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
    
//     return (0);
// }

#include <iostream>
#include <Array.hpp>
#include <time.h>
#include <stdlib.h>
#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (unsigned int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (unsigned int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}