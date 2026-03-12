/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:39:50 by julian            #+#    #+#             */
/*   Updated: 2026/03/12 16:13:37 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal() 
{
    _type = "Animal";
    std::cout << "Animal constructor" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destroyed" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other) : _type(other._type)
{
    std::cout << "Animal copied" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other) 
{
    std::cout << "Animal assigned" << std::endl;
    if (this != &other) {
        _type = other._type;
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return _type;
}

Brain *AAnimal::getBrain() const
{
    return nullptr;
}


