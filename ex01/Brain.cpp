/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:36:10 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 15:08:15 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;

    for (int i = 0; i < 100; i++)
        _ideas[i] = other._ideas[i];
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
            _ideas[i] = other._ideas[i];
    }
    return *this;
}


Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::setIdea(int index, const std::string idea)
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Index out of bounds" << std::endl;
        return "";
    }
    _ideas[index] = idea;
    return _ideas[index];
}

std::string Brain::getIdea(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "Index out of bounds" << std::endl;
        return "";
    }
    return _ideas[index];
}
