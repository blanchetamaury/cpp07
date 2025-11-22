/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 21:11:43 by amaury            #+#    #+#             */
/*   Updated: 2025/11/22 21:56:59 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() {
    array = NULL;
    len = 0;
}

template<typename T>
Array<T>::~Array() {
    delete[] array;
}

template<typename T>
Array<T>::Array(unsigned int n) {
    array = new T[n];
    for (unsigned int i = 0; i < n; i++) {
        array[i] = 0;
    }
    len = n;
}

template<typename T>
Array<T>::Array(const Array<T> &other) {
    if (this != &other) {
        this->array = new T[other.len];
        for (unsigned int i = 0; i < other.len; i++) {
            this->array[i] = other.array[i];
        }
        this->len = other.len;
    }
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other) {
    if (this != &other) {
        this->array = new T[other.len];
        for (unsigned int i = 0; i < other.len; i++) {
            this->array[i] = other.array[i];
        }
        this->len = other.len;
    }
    return (*this);
}

template<typename T>
T   &Array<T>::operator[](unsigned int pos) {
    if (pos >= this->len) {
        throw  std::out_of_range("Bad position");
    }
    return (array[pos]);
}

template<typename T>
unsigned int Array<T>::size() {
    return len;
}

#endif