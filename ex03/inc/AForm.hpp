/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:50:56 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 18:07:50 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>

#include "Bureaucrat.hpp"

class AForm
{
	private:
		const std::string	_name;
		const int			_gradeToSign; 
		const int			_gradeToExecute; 
		bool				_formSigned;
	public:
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw ();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw ();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw ();
		};

		AForm(void);
		AForm(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned);
		AForm(const AForm &other);
		virtual ~AForm(void);
		AForm& operator=(const AForm &other);

		const std::string&	getName(void) const;
		int					getGradeToSign(void) const;
		int					getToExecute(void) const;
		bool				getAFormSigned(void) const;
	
		void				setAFormSigned(bool	newSigned);

		void				beSigned(Bureaucrat& name);
		void				checkRequirements(Bureaucrat const & executor) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& os, const AForm& other);

#endif
