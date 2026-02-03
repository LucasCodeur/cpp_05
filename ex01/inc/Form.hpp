/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:50:56 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/03 15:17:10 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <exception>

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	_name;
		const int			_gradeToSign; 
		const int			_gradeToExecute; 
		bool				_formSigned;
	public:
		class GradeTooHighException : std::exception
			{
				public:
					virtual const char* what() const throw ()
					{
						return ("Grade too high\n");
					}
				
			};
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char* what() const throw ()
				{
					return ("Grade too low\n");
				}
			
		};

		Form(void);
		Form(std::string name, const int _gradeToSign, const int _gradeToExecute, bool _formSigned);
		Form(Form &other);
		~Form(void);
		Form& operator=(const Form &other);

		const std::string&	getName(void) const;
		int					getGradeToSign(void) const;
		int					getToExecute(void) const;
		bool				getFormSigned(void) const;

		void				beSigned(Bureaucrat& name);

};

std::ostream& operator<<(std::ostream& os, const Form& other);

#endif
