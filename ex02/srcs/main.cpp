/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:59:59 by anouri            #+#    #+#             */
/*   Updated: 2024/04/25 11:08:05 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Array.hpp"
#include "../../ex01/incs/iter.hpp"

int main()
{
    Array<int> a(20);
    for (unsigned int i = 0; i < a.Sise(); i++)
        std::cout << a[i] << std::endl;
    std::cout << "*************************************************************" << std::endl;
    try
    {
        std::cout << a[25] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}