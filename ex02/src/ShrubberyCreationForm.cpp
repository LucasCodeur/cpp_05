/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:43:50 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 13:42:25 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("John", 145, 137, false)
{
	std::cout << this->getName() << " ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->getName() << " ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other)
{
	std::cout << this->getName() << " ShrubberyCreationForm Copy Constructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
		this->setAFormSigned(other.getAFormSigned());
	return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string _name, bool _formSigned) : AForm(_name, 145, 137, _formSigned)
{
	std::cout << this->getName() << " ShrubberyCreationForm Parameterized Constructor called" << std::endl;
}

// class ShrubberyCreationForm : public AForm
// {
// 		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
// 	private:
//
// };
