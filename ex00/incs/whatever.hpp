/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anouri <anouri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:55:52 by anouri            #+#    #+#             */
/*   Updated: 2024/04/23 18:09:16 by anouri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template< typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
template< typename T>

T const & min(T const &x, T const &y)
{
    return(x <y ? x:y);
}

template< typename T>

T const & max(T const &x, T const &y)
{
    return(x >=y ? x:y);
}
#endif
