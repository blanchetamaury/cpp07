/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amblanch <amblanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:18:54 by amaury            #+#    #+#             */
/*   Updated: 2025/11/26 10:59:53 by amblanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void    iter(T *array, const int size, void (*fct)(const T&)) {
    for (int i = 0; i < size; i++)
        fct(array[i]);
}
template<typename T>
void    iter(T *array, const int size, void (*fct)(T&)) {
    for (int i = 0; i < size; i++)
        fct(array[i]);
}

#endif