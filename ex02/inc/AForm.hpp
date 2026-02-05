/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 09:50:56 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 11:43:11 by lud-adam         ###   ########.fr       */
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
};

std::ostream&	operator<<(std::ostream& os, const AForm& other);

#endif
