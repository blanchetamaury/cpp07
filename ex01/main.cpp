/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaury <amaury@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/22 18:18:51 by amaury            #+#    #+#             */
/*   Updated: 2025/11/22 18:40:00 by amaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template<typename T>
T incrementation(T a) {
    a++;
    return a;
}

template<typename T>
T hello(T a) {
    a = "hello";
    return a;
}

int main(void) {
    int tab[5] = {0, 1, 2, 3, 4};
    
    std::cout << "tab [ ";
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << " ";
    std::cout << "]" << std::endl;
    
    iter(tab, 5, &incrementation);
    
    std::cout << "tab [ ";
    for (int i = 0; i < 5; i++)
        std::cout << tab[i] << " ";
    std::cout << "]" << std::endl;
    
    
    std::string array[5] = { "welcome", "welcome", "welcome", "welcome", "welcome"};
    std::cout << "array [ ";
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl;
    
    iter(array, 5, &hello);
    
    std::cout << "array [ ";
    for (int i = 0; i < 5; i++)
        std::cout << array[i] << " ";
    std::cout << "]" << std::endl;
}   