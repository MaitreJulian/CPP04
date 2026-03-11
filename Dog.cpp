/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 14:49:16 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/11 16:08:38 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << "Dog created" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    _type = other._type;
    std::cout << "Dog copied" << std::endl;
}

Dog& Dog::operator=(const Dog& other) 
{
    std::cout << "Dog assigned" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

std::string Dog::getType() const
{
    return _type;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}