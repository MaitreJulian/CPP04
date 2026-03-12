/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvenkata <jvenkata@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:29:50 by jvenkata          #+#    #+#             */
/*   Updated: 2026/03/12 15:52:40 by jvenkata         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
    private:
        Brain* _brain;
    public :
    
        Cat();
        Cat(const Cat& other);
        Cat& operator=(const Cat& other);
        ~Cat();

        std::string getType() const;
        void makeSound() const;
        Brain *getBrain() const;
        std::string getIdea(int index) const;

};

class WrongCat : public WrongAnimal
{
    public :
    
        WrongCat();
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        ~WrongCat();

        std::string getType() const;
        void makeSound() const;

};

#endif
