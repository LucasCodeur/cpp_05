/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 09:43:50 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 11:33:59 by lud-adam         ###   ########.fr       */
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
	if (this != &other)
	{
		// this->setAFormSigned(other.getAFormSigned());
	}
}

// class ShrubberyCreationForm : public AForm
// {
// 		ShrubberyCreationForm(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned);
// 		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &other);
// 	private:
//
// };
