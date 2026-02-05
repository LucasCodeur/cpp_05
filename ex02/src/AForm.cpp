/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:18:04 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 11:43:51 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void) : _name("National decree"), _gradeToSign(2), _gradeToExecute(1), _formSigned (false) 
{
	std::cout << this->_name << " AForm Default constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw AForm::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw AForm::GradeTooHighException();
}

AForm::~AForm()
{
	std::cout << this->_name << " AForm Destructor called" << std::endl;
}

AForm::AForm(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned) : _name(name), _gradeToSign(_gradeToSign), _gradeToExecute(_gradeToExecute), _formSigned(_formSigned)
{
	std::cout << this->_name << " AForm Parameterized constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw AForm::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw AForm::GradeTooHighException();
}


AForm::AForm(const AForm &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _formSigned(other._formSigned)
{
	std::cout << this->_name << " AForm Copy constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw AForm::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw AForm::GradeTooHighException();
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
	{
		this->_formSigned  = other._formSigned;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const AForm& other)
{
	os << other.getName() << ", Grade to sign: " << other.getGradeToSign() << ", Grade to execute: " << other.getToExecute() << ", Signed: " << other.getAFormSigned() << std::endl;;
	return (os);
}

const std::string&	AForm::getName(void) const
{
	return (this->_name);
}

int	AForm::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	AForm::getToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	AForm::getAFormSigned(void) const
{
	return (this->_formSigned);
}

void	AForm::setAFormSigned(bool	newSigned)
{
	this->_formSigned = newSigned;
}

void	AForm::beSigned(Bureaucrat& name)
{
	if (name.getGrade() <= this->_gradeToSign)
	{
		if (this->_formSigned == false)
		{
			this->_formSigned = true;
			std::cout << name.getName() << " signed " << this->getName() << std::endl;
		}
		else
			std::cout << name.getName() << " couldn't signed " << this->getName() << " because " << "already signed" << std::endl;
	}
	else
		throw AForm::GradeTooLowException();
}
