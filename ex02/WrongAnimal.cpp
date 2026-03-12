/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:05:17 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 15:54:52 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

WrongAnimal::WrongAnimal() 
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "WrongAnimal copied" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) 
{
    std::cout << "WrongAnimal assigned" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void WrongAnimal::makeSound() const 
{
    std::cout << "WrongAnimal makes a weird noise..." << std::endl;
}
