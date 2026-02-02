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

#include <string>
#include <iostream>

class Bureaucrat : public std::exception
{
	private:
		const std::string 	_name;
		unsigned short int	_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string const &name, unsigned short int _grade);
		Bureaucrat(Bureaucrat &other);
		virtual ~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat &other);

		const std::string & getName() const;
		unsigned short int getGrade() const;
		virtual const char* what() const throw();
		// GradeTooHighException
};

#endif
