/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:20:20 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 17:28:11 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("John", 25, 5, false)
{
	std::cout << this->getName() << " PresidentialPardonForm Default constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << this->getName() << " PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other)
{
	std::cout << this->getName() << " PresidentialPardonForm Copy Constructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
		this->setAFormSigned(other.getAFormSigned());
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string _name) : AForm(_name, 25, 5, false)
{
	std::cout << this->getName() << " PresidentialPardonForm Parameterized Constructor called" << std::endl;
}

void	PresidentialPardonForm::pardoned(std::string target)
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
