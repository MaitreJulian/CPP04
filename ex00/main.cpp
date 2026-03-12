/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 01:37:02 by julian            #+#    #+#             */
/*   Updated: 2026/03/12 16:15:57 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "========== Animal ============" << std::endl;
    
    const Animal* meta = new Animal();
    
    std::cout << std::endl;
    
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    
    std::cout << std::endl;

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    dog->makeSound(); 
    cat->makeSound();
    meta->makeSound();

    std::cout << std::endl;

    delete meta;
    delete dog;
    delete cat;
    std::cout << std::endl;

    std::cout << "========== WrongAnimal ============" << std::endl;
    
    const WrongAnimal* metaWrong = new WrongAnimal();
    std::cout << std::endl;
    const WrongAnimal* catWrong = new WrongCat();

    std::cout << std::endl;

    std::cout << catWrong->getType() << " " << std::endl;
    catWrong->makeSound();
    metaWrong->makeSound();

    std::cout << std::endl;

    delete metaWrong;
    delete catWrong;

    return 0;
}