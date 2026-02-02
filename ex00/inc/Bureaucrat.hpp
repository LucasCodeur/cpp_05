/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:42:31 by lud-adam          #+#    #+#             */
/*   Updated: 2026/01/28 18:35:17 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <exception>
#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string 	_name;
		short int	_grade;
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
		Bureaucrat(void);
		Bureaucrat(std::string const &name, short int _grade);
		Bureaucrat(Bureaucrat &other);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string & getName() const;
		short int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

#endif
