/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:04:59 by amaury            #+#    #+#             */
/*   Updated: 2025/11/22 21:50:09 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class Array
{
    private:
        T               *array;
        unsigned int    len;
    public:
        Array();
        ~Array();
        Array(unsigned int n);
        Array(const Array<T> &other);
        Array<T> &operator=(const Array<T> &other);
        T        &operator[](unsigned int pos);

        unsigned int size();
};


#endif