/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lud-adam <lud-adam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:58:13 by lud-adam          #+#    #+#             */
/*   Updated: 2026/02/05 15:47:11 by lud-adam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM
# define ROBOTOMY_REQUEST_FORM

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &other);
		void	execute(Bureaucrat const & executor) const;
	private:
};

#endif
