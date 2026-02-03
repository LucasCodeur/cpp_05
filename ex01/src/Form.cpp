/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 10:18:04 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/03 10:19:31 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("National decree"), _gradeToSign(2), _gradeToExecute(1), _formSigned (false) 
{
	std::cout << this->_name << " Form Default constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw Form::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw Form::GradeTooHighException();
}

Form::~Form()
{
	std::cout << this->_name << " Form Destructor called" << std::endl;
}

Form::Form(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned) : _name(name), _gradeToSign(_gradeToSign), _gradeToExecute(_gradeToExecute), _formSigned(_formSigned)
{
	std::cout << this->_name << " Form Parameterized constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw Form::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw Form::GradeTooHighException();
}


Form::Form(Form &other) : _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _formSigned(other._formSigned)
{
	std::cout << this->_name << " Form Copy constructor called" << std::endl;
	if (_gradeToSign > 150 || _gradeToExecute > 150)
			throw Form::GradeTooLowException();
	else if (_gradeToSign < 1 || _gradeToExecute < 1)
			throw Form::GradeTooHighException();
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
	{
		this->_formSigned  = other._formSigned;
	}
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Form& other)
{
	os << other.getName() << ", Grade to sign: " << other.getGradeToSign() << ", Grade to execute: " << other.getToExecute() << ", Signed: " << other.getFormSigned() << std::endl;;
	return (os);
}

const std::string&	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

int	Form::getToExecute(void) const
{
	return (this->_gradeToExecute);
}

bool	Form::getFormSigned(void) const
{
	return (this->_formSigned);
}

//
// class Form
// {
// 	private:
// 		const std::string	_name;
// 		const int			_gradeToSign; 
// 		const int			_gradeToExecute; 
// 		bool				_formSigned;
// 	public:
// 		class GradeTooHighException : std::exception
// 			{
// 				public:
// 					virtual const char* what() const throw ()
// 					{
// 						return ("Grade too high\n");
// 					}
//
// 			};
// 		class GradeTooLowException : std::exception
// 		{
// 			public:
// 				virtual const char* what() const throw ()
// 				{
// 					return ("Grade too low\n");
// 				}
//
// 		};
//
// 		Form(void);
// 		Form(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned);
// 		Form(Form &other);
// 		~Form(void);
// 		Form& operator=(const Form &other);
//
//
// 		void				beSigned(Bureaucrat name);
// };
//

