/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:23:48 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/11 16:08:50 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destroyed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    _type = other._type;
    std::cout << "Cat copied" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assigned" << std::endl;
    if (this != &other) {
        Animal::operator=(other);
    }
    return *this;
}

std::string Cat::getType() const
{
    return _type;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

