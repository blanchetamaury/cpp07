/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:08:25 by amaury            #+#    #+#             */
/*   Updated: 2025/11/22 18:17:25 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void    swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T   min(T a, T b) {
    if (a == b)
        return b;
    if (a > b)
        return b;
    return a;
}

template <typename T>
T   max(T a, T b) {
    if (a == b)
        return b;
    if (a > b)
        return a;
    return b;
}

#endif