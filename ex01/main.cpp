/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:36:05 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 15:27:26 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main(void)
{
	{
		Animal *lotsOfAnimals[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 10 / 2)
				lotsOfAnimals[i] = new Dog();
			else
				lotsOfAnimals[i] = new Cat();
		}
		std::cout << "-------------------------------------\n";
		std::cout << lotsOfAnimals[0]->getType() << std::endl;
		std::cout << lotsOfAnimals[5]->getType() << std::endl;
		Brain *brain;
		brain = lotsOfAnimals[0]->getBrain();
		brain->setIdea(0, "I want sarshisitas!");
		brain->setIdea(1, "Let's play ball!!");
		brain->setIdea(2, "Feed me human!");
		std::cout << lotsOfAnimals[0]->getBrain()->getIdea(0) << std::endl;
		std::cout << lotsOfAnimals[0]->getBrain()->getIdea(1) << std::endl;
		std::cout << "-------------------------------------\n";
		for (int i = 0; i < 10; i++)
			delete lotsOfAnimals[i];
	}

	return 0;
}