/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:18:54 by amaury            #+#    #+#             */
/*   Updated: 2025/11/22 18:36:32 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template<typename T>
void    iter(T *array, const int size, T (*fct)(const T)) {
    for (int i = 0; i < size; i++)
        array[i] = fct(array[i]);
}

#endif