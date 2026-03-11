/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:59:08 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/11 16:08:30 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << "WrongCat created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    _type = other._type;
    std::cout << "WrongCat copied" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat assigned" << std::endl;
    if (this != &other) {
        WrongAnimal::operator=(other);
    }
    return *this;
}

std::string WrongCat::getType() const
{
    return _type;
}

void WrongCat::makeSound() const
{
    std::cout << "MIAOURGHHHHH" << std::endl;
}
